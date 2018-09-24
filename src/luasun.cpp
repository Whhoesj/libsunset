#include "Dusk2Dawn.h"

extern "C" {
    #include "lua.h"
    #include "lualib.h"
    #include "lauxlib.h"
}

extern "C" int calculateDaylight(lua_State *L) {
    if (lua_gettop(L) != 7) return 0;

    double lat = lua_tonumber(L, 1);
    double lon = lua_tonumber(L, 2);
    int offset = (int) lua_tonumber(L, 3);
    int year = (int) lua_tonumber(L, 4);
    int month = (int) lua_tonumber(L, 5);
    int day = (int) lua_tonumber(L, 6);
    int dst = (bool) lua_toboolean(L, 7);


    Dusk2Dawn calculator = Dusk2Dawn(lat, lon, offset);

    lua_pushnumber(L, calculator.sunrise(year, month, day, dst));
    lua_pushnumber(L, calculator.sunset(year, month, day, dst));

    return 2;
}

extern "C" int luaopen_libsunset(lua_State *L) {

    static const luaL_Reg libsunset[2] = {
        {"calculateDaylight", calculateDaylight},
        {NULL, NULL}
    };

    //luaL_openlib(L, "libsunset", libsunset, 0);
    luaL_newlib(L, libsunset);

    return 1;
}
cmake_minimum_required (VERSION 3.0.0)
project (sunset)

find_package(Lua REQUIRED)
include_directories(/usr/local/include ${LUA_INCLUDE_DIR})

set (CMAKE_CXX_STANDARD 11)
set (SOURCES src/Dusk2Dawn.cpp src/luasun.cpp)
set (HEADERS src/Dusk2Dawn.h)

add_library (${PROJECT_NAME} SHARED ${SOURCES})
target_link_libraries(sunset ${LUA_LIBRARIES})
#set_target_properties(${PROJECT_NAME} PROPERTIES COMPILE_FLAGS "-m32" LINK_FLAGS "-m32")

install (TARGETS ${PROJECT_NAME} DESTINATION lib)
install (FILES ${HEADERS} DESTINATION include)

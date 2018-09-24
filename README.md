# libsunset

Lua library for calculating sunrise/sunset. Based on [Dawn2Dusk](https://github.com/dmkishi/Dusk2Dawn).

## Example

```lua

libsunset = require('libsunset')

local lat = -41.4629843
local lon = -72.9655277
local timezone = -3
local y = 2018
local m = 9
local d = 24
local isDST = false

local sunrise, sunset = libsunset.calculateDaylight(lat, lon, timezone, y, m, d, isDST)
print("Sunrise: " .. sunrise)
print("Sunset:  " .. sunset)

```
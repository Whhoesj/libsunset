rockspec_format = "3.0"
package = "libsunset"
version = "dev-1"
source = {
   url = "git+https://github.com/Whhoesj/libsunset.git"
}
description = {
   summary = "Calculate sunrise and sunset times",
   detailed = "Lua library for calculating sunrise/sunset. Based on [Dawn2Dusk](https://github.com/dmkishi/Dusk2Dawn).",
   homepage = "https://github.com/whhoesj/libsunset",
   issues_url = "https://github.com/Whhoesj/libsunset/issues",
   maintainer = "Wouter Habets <wouter@habets.io>",
   license = "MIT"
}
build = {
   type = "cmake",
   variables = {
      CMAKE_INSTALL_PREFIX = "$(PREFIX)"
   }
}

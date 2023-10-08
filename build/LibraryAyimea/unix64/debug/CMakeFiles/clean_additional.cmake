# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/LibraryAyimea_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/LibraryAyimea_autogen.dir/ParseCache.txt"
  "LibraryAyimea_autogen"
  )
endif()

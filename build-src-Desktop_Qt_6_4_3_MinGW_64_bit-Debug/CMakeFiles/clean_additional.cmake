# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\MyDndServer_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\MyDndServer_autogen.dir\\ParseCache.txt"
  "MyDndServer_autogen"
  )
endif()

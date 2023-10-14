# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\MyDungeonsAndDragonsServer_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\MyDungeonsAndDragonsServer_autogen.dir\\ParseCache.txt"
  "MyDungeonsAndDragonsServer_autogen"
  )
endif()

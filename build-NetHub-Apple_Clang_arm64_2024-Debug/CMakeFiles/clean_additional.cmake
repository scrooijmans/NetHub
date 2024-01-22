# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/NetHub_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/NetHub_autogen.dir/ParseCache.txt"
  "NetHub_autogen"
  )
endif()

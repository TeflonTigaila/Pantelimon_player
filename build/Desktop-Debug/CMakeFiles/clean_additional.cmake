# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/PLAYER_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/PLAYER_autogen.dir/ParseCache.txt"
  "PLAYER_autogen"
  )
endif()

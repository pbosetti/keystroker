cmake_minimum_required(VERSION 3.20)
set(VERSION "0.0.1")
project(CNCpp VERSION ${VERSION} LANGUAGES C CXX)
set(CMAKE_CXX_STANDARD 11)


if(CMAKE_BUILD_TYPE STREQUAL "")
  set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Choose the type of build." FORCE)
endif()

add_library(keystroker STATIC ${CMAKE_CURRENT_LIST_DIR}/src/keystroker.c)
target_include_directories(keystroker PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include)

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
  message(WARNING "Building in Debug mode")
  add_executable(test ${CMAKE_CURRENT_LIST_DIR}/src/test.c)
  target_link_libraries(test PRIVATE keystroker)

  add_executable(testpp ${CMAKE_CURRENT_LIST_DIR}/src/test.cpp)
  target_link_libraries(testpp PRIVATE keystroker)
endif()
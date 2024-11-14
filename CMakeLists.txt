cmake_minimum_required(VERSION 3.16)

project(basic)

message (STATUS "-----------curent path : ${CMAKE_CURRENT_SOURCE_DIR}---------")

#include_directories(${CMAKE_SOURCE_DIR}/hdr/)
message (STATUS "-----------CMAKE_SOURCE_DIR : ${CMAKE_SOURCE_DIR}------------")
#target_include_directories(mybin PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/hdr)
file (GLOB SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/sub_src/*.c")
file (GLOB APP "${CMAKE_CURRENT_SOURCE_DIR}/src/*.c")
message (STATUS "-----------source files : ${SOURCES}---------")

add_library(mymath SHARED ${SOURCES})
add_executable(mybin ${APP})
target_link_libraries(mybin mymath)
target_include_directories(mymath PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/hdr)
target_include_directories(mybin PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/hdr)
target_compile_options(mybin PRIVATE -Wall -Wextra)

#target_include_directories(basic
#	INTERFACE ${CMAKE_SOURCE_DIR}/hdr/
#)



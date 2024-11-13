cmake_minimum_required(VERSION 3.16)

project(basic)

message (STATUS "-----------curent path : ${CMAKE_CURRENT_SOURCE_DIR}---------")

#include_directories(${CMAKE_SOURCE_DIR}/hdr/)
message (STATUS "-----------CMAKE_SOURCE_DIR : ${CMAKE_SOURCE_DIR}------------")
#target_include_directories(mybin PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/hdr)
file (GLOB SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.c" "${CMAKE_CURRENT_SOURCE_DIR}/src/sub_src/*.c")
message (STATUS "-----------source files : ${SOURCES}---------")

add_executable(mybin ${SOURCES})
target_include_directories(mybin PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/hdr)


#target_include_directories(basic
#	INTERFACE ${CMAKE_SOURCE_DIR}/hdr/
#)



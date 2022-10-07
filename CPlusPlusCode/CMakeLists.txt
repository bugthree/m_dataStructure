cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(m_dataStructure LANGUAGES CXX)
message(STATUS "\n ################################")
message(STATUS "\n output project name:")
message(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(CMAKE_VERSION VERSION_LESS "3.7.0")
      set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

file(GLOB SRC_H_FILES "${CMAKE_CURRENT_SOURCE_DIR}/src" */*.h )
file(GLOB SRC_CPP_FILES "${CMAKE_CURRENT_SOURCE_DIR}/src" */*.cpp)
message(STATUS "\n output all CPP FILES:")
message(${SRC_CPP_FILES})
message(STATUS "\n output all H FILES:")
message(${SRC_H_FILES})
SOURCE_GROUP("SOURCES FILES" FILES ${SRC_CPP_FILES})
SOURCE_GROUP("Header FILES" FILES ${SRC_H_FILES})

add_executable(${PROJECT_NAME}
              ${SRC_CPP_FILES}
              ${SRC_H_FILES}
)
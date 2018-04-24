cmake_minimum_required(VERSION 3.0)
project(test-python-embedded)

find_package(PythonLibs REQUIRED)

if(NOT PYTHONLIBS_FOUND)
message(FATAL "Error: No Python Libs found!")
endif()

include_directories(${PYTHON_INCLUDE_DIRS})
add_executable(test-python-embedded main.cpp)
target_link_libraries(test-python-embedded ${PYTHON_LIBRARIES})


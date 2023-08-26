cmake_minimum_required(VERSION 3.5)

project(wasmedge_image_filter CXX)

find_package(OpenCV 4 REQUIRED)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE Debug)

add_executable(main main.cc)

target_link_libraries(main PUBLIC ${OpenCV_LIBS})
target_include_directories(main PUBLIC ${OpenCV_INClUDE_DIRS})

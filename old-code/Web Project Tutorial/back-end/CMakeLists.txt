cmake_minimum_required(3.10)
project(SimpleWebPage VERSION 1.0)
add_executable(main main.cpp)


find_package(Boost REQUIRED COMPONENTS asio)
include_directories(${Boost_INCLUDE_DIRS})
target_link_libraries(your_target_name ${Boost_LIBRARIES})
include(common.cmake)

cmake_minimum_required(VERSION 3.12.3)

project(JD_CMAKE CXX)
add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(point)
add_subdirectory(benchmark)

target_include_directories(
    ${PROJECT_NAME} PRIVATE point
    ${PROJECT_NAME} PRIVATE benchmark/include
)

target_link_directories(
    ${PROJECT_NAME} PUBLIC point
    ${PROJECT_NAME} PUBLIC benchmark/src
)

target_link_libraries(
    ${PROJECT_NAME} 
        ${LIBRARY_NAME}
        benchmark
)



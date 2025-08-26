cmake_minimum_required(VERSION 3.16)
project(BlackHole)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(OpenGL REQUIRED)
find_package(glfw3 3.3 REQUIRED)

add_executable(BlackHole main.cpp
        BlackHole.cpp
        BlackHole.h)

add_library(glad /usr/local/include/glad/src/glad.c)
target_include_directories(glad PUBLIC /usr/local/include/glad/include)

target_link_libraries(BlackHole PRIVATE glfw glad OpenGL::GL)

find_package(OpenGL REQUIRED)
find_package(glfw3 3.3 REQUIR
find_package(glm REQUIRED)

target_include_directories(BlackHole PRIVATE ${GLM_INCLUDE_DIRS})
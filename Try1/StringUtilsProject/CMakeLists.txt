# CMakeLists.txt en el directorio raíz del proyecto

cmake_minimum_required(VERSION 3.10)
project(StringUtils)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${PROJECT_SOURCE_DIR}/include)

# Habilitar las pruebas antes de añadir subdirectorios que las registran
enable_testing()

add_subdirectory(src)
add_subdirectory(test)

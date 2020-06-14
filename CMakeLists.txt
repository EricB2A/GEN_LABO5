cmake_minimum_required(VERSION 2.8.2)
set(CMAKE_CXX_STANDARD 11)
project(GEN_LABO)

include(CTest)

if (CMAKE_VERSION VERSION_LESS 3.2)
    set(UPDATE_DISCONNECTED_IF_AVAILABLE "")
else()
    set(UPDATE_DISCONNECTED_IF_AVAILABLE "UPDATE_DISCONNECTED 1")
endif()

include(DownloadProject.cmake)
download_project(PROJ                googletest
        GIT_REPOSITORY      https://github.com/google/googletest.git
        GIT_TAG             master
        ${UPDATE_DISCONNECTED_IF_AVAILABLE}
        )

# Prevent GoogleTest from overriding our compiler/linker options
# when building with Visual Studio
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})

# When using CMake 2.8.11 or later, header path dependencies
# are automatically added to the gtest and gmock targets.
# For earlier CMake versions, we have to explicitly add the
# required directories to the header search path ourselves.
if (CMAKE_VERSION VERSION_LESS 2.8.11)
    include_directories("${gtest_SOURCE_DIR}/include"
            "${gmock_SOURCE_DIR}/include")
endif()

# Trivial example using gtest and gmock
add_executable(GEN_LABO5 sources/Customer.cpp
        sources/Customer.h
        sources/main.cpp
        sources/Movie.cpp
        sources/Movie.h
        sources/Rental.h
        tests/tests.cpp sources/Rental.cpp)

target_link_libraries(GEN_LABO5 gtest gmock_main)
add_test(NAME TEST COMMAND GEN_LABO5)
add_custom_target(check COMMAND ${CMAKE_CTEST_COMMAND} depends GEN_LABO5)


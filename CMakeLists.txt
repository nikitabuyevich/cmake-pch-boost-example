cmake_minimum_required(VERSION 3.16)

project(CMakeBoostLibPCH
        VERSION 1.0
        DESCRIPTION "Example of a CMake with Boost, internal library, and PCH setup."
        LANGUAGES CXX)

# Only do these if this is the main project, and not if it is included through add_subdirectory
if (CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)

    # Optionally set things like CMAKE_CXX_STANDARD, CMAKE_POSITION_INDEPENDENT_CODE here
    set(CMAKE_CXX_STANDARD 17)
    set(CMAKE_CXX_STANDARD_REQUIRED ON)
    # Let's ensure -std=c++xx instead of -std=g++xx
    set(CMAKE_CXX_EXTENSIONS OFF)

    # Disable extra targets that CTest creates
    set_property(GLOBAL PROPERTY CTEST_TARGETS_ADDED 1)

    # Testing only available if this is the main app
    # Note this needs to be done in the main CMakeLists
    # since it calls enable_testing, which must be in the
    # main CMakeLists.
    include(CTest)

    # Docs only available if this is the main app
    find_package(Doxygen)
    if (Doxygen_FOUND)
        add_subdirectory(docs)
    else ()
        message(STATUS "Doxygen not found, not building docs")
    endif ()
endif ()

# Fetch Content
include(FetchContent)
# Formatting library
FetchContent_Declare(
        fmtlib
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG 5.3.0
)
# Testing library
FetchContent_Declare(
        catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG v2.9.1
)

# Adds fmtlib Catch2::Catch2 to the global scope
FetchContent_MakeAvailable(fmtlib catch2)

# Make external libraries and libraries globally available.
add_subdirectory(pkg)

# Create the targets for the entire example-app.
add_subdirectory(app)


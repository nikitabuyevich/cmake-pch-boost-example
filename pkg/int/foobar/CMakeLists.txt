project(foobar
        VERSION 1.0.0
        DESCRIPTION "Some info about the package.")

add_subdirectory(tests)

set(HEADER_LIST "${CMakeBoostLibPCH_SOURCE_DIR}/pkg/int/inc/foobar/foobar.h")

# Make an automatic library - will be static or dynamic based on user setting
add_library(foobar foobar.cpp ${HEADER_LIST})

# Add precompiled headers
target_precompile_headers(foobar PRIVATE "${CMakeBoostLibPCH_SOURCE_DIR}/pch.h")

# We need this directory, and users of our library will need it too
target_include_directories(foobar PUBLIC "${CMakeBoostLibPCH_SOURCE_DIR}/pkg/int/inc")

# This depends on (header only) boost
target_link_libraries(foobar PRIVATE Boost::boost)

# All users of this library will need at least C++17
target_compile_features(foobar PUBLIC cxx_std_17)

add_library(foo::bar ALIAS foobar)



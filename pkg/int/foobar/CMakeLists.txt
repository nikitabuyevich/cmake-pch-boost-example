#set(HEADER_LIST "${PROJECT_SOURCE_DIR}/inc/foobar.hpp")

# Make an automatic library - will be static or dynamic based on user setting
#add_library(foobar_pkg src/foobar.cpp ${HEADER_LIST})
add_library(foobar_pkg src/foobar.cpp inc/foobar.h)

# We need this directory, and users of our library will need it too
target_include_directories(foobar_pkg PUBLIC inc)

# This depends on (header only) boost
target_link_libraries(foobar_pkg PRIVATE Boost::boost)

# All users of this library will need at least C++17
target_compile_features(foobar_pkg PUBLIC cxx_std_17)

add_library(foo::bar ALIAS foobar_pkg)


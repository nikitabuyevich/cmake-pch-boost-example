#add_executable(mvbuild src/main.cpp)
#
#target_compile_features(mvbuild PRIVATE cxx_std_17)
#
#target_link_libraries(mvbuild PRIVATE foo::bar fmt::fmt)

add_executable(mvbuild)
target_sources(mvbuild PRIVATE "src/main.cpp")
target_link_libraries(mvbuild
        PRIVATE foo::bar
        fmt::fmt)

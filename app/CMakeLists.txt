add_executable(mvbuild src/main.cpp)

target_compile_features(mvbuild PRIVATE cxx_std_17)

target_link_libraries(mvbuild PRIVATE foo::bar fmt::fmt)

# Add precompiled headers
# Reuse foobar's precompile headers
target_precompile_headers(mvbuild REUSE_FROM foobar)

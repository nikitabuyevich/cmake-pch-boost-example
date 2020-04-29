add_executable(CMakeBoostLibPCH src/main.cpp)

target_compile_features(CMakeBoostLibPCH PRIVATE cxx_std_17)

target_link_libraries(CMakeBoostLibPCH PRIVATE foo::bar fmt::fmt)

# Add precompiled headers
# Reuse foobar's precompile headers
target_precompile_headers(CMakeBoostLibPCH REUSE_FROM foobar)

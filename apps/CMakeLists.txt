add_executable(CMakeTest_app main.cpp)

target_compile_features(CMakeTest_app PRIVATE cxx_std_11)

target_link_libraries(CMakeTest_app PRIVATE CMakeTest_lib)
set(HEADER_LIST "${CMakeTest_SOURCE_DIR}/include/") #not finished
set(SRC_LIST "${CMakeTest_SOURCE_DIR}/src/")
add_library(CMakeTest_lib TestClass.cpp  ${HEADER_LIST})

target_include_directories(CMakeTest_lib PUBLIC ../include)

target_compile_features(CMakeTest_lib PUBLIC cxx_std_11)

#include "TestClass.h"

TestClass::TestClass()
{
    std::cout << "CTOR RUN\n" << std::endl;
}

void TestClass::printTest()
{
    std::cout << "Test!\n" <<std::endl;
}

void TestClass::printNum(int val)
{
    std::cout << val << "\n" << std::endl;
}

void TestClass::printStr(std::string str)
{
    std::cout << str << std::endl;
}
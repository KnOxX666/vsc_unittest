#include <gtest/gtest.h>

#include <string>

#include "MyClass2.h"
using namespace std;

TEST(TestMyClass2, GetHelloWorld)
{
    MyClass2 myClass;
    EXPECT_EQ(myClass.GetHelloWorld(), "Hello World");
}

TEST(TestMyClass2, GetHelloWorld2)
{
    MyClass2 myClass;
    EXPECT_NE(myClass.GetHelloWorld(), "");
}
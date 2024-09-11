#include <gtest/gtest.h>

#include <string>

#include "MyClass.h"
using namespace std;

TEST(TestMyClass, GetHelloWorld)
{
    MyClass myClass;
    EXPECT_EQ(myClass.GetHelloWorld(), "Hello World");
}

TEST(TestMyClass, GetHelloWorld2)
{
    MyClass myClass;
    EXPECT_NE(myClass.GetHelloWorld(), "");
}

TEST(TestMyClass, GetString1)
{
    MyClass myClass;
    EXPECT_EQ(myClass.GetString1OrString2(true), "String1");
}
#include "MyClass.h"
#include <string>
using namespace std;

void MyClass::Run()
{
    string helloWorld = GetHelloWorld();
}

std::string MyClass::GetHelloWorld() const
{
    return "Hello World";
}

std::string MyClass::GetString1OrString2(bool getString1) const
{
    if (getString1)
    {
        return "String1";
    }
    else
    {
        return "String2";
    }
}
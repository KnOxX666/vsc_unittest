#include "MyClass2.h"
#include <string>
using namespace std;

void MyClass2::Run()
{
    string helloWorld = GetHelloWorld();
}

std::string MyClass2::GetHelloWorld() const
{
    return "Hello World";
}
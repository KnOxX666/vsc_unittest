#pragma once
#include <string>

class MyClass
{
public:
    void Run();
    std::string GetHelloWorld() const;
    std::string GetString1OrString2(bool getString1) const;
};
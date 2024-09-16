#include <gtest/gtest.h>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    char* buildDir = std::getenv("BUILDDIR");
    char* srcDir = std::getenv("SRCDIR");
    cout << "Num Args: " << argc - 1 << endl;
    for (int i = 1; i < argc; ++i)
    {
        cout << i << ": " << argv[i] << endl;
    }
    if (buildDir == nullptr || srcDir == nullptr)
    {
        cerr << "Error: Need environment parameter BUILDIR and SRCDIR to run, exiting!" << endl;
        exit(1);
    }
    else
    {
        cout << "YEHAAAAAAAAAAAAAAA, WORKS!!!!" << endl;
    }
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
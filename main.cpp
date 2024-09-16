#include <gtest/gtest.h>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    std::vector<const char*> new_argv(argv, argv + argc);
    new_argv.push_back("--dummy1");
    new_argv.push_back("--dummy2");
    new_argv.push_back(nullptr);
    argv = const_cast<char**>(new_argv.data());
    argc += 2;

    bool dummy1Found = false;
    bool dummy2Found = false;
    for (int i = 0; i < argc; ++i)
    {
        if (strcmp(argv[i], "--dummy1") == 0) dummy1Found = true;
        if (strcmp(argv[i], "--dummy2") == 0) dummy2Found = true;
    }
    if (not dummy1Found || not dummy2Found)
    {
        cerr << "Error: Need --dummy1 and --dummy2 to run, exiting!" << endl;
        exit(1);
    }
    else
    {
        cout << "YEHAAAAAAAAAAAAAAA, WORKS!!!!" << endl;
    }
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
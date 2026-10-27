#include <gtest/gtest.h>
#include <sstream>

#define main program_main
#include "main.cpp"
#undef main

TEST(Input_Test, OrdinaryFunction)
{
    istringstream in("1 2 3 4 5");
    streambuf* old = cin.rdbuf(in.rdbuf());

    int a[5];
    Input(a, 5, 0);

    cin.rdbuf(old);

    int expected[5] = { 1, 2, 3, 4, 5 };
    for (int i = 0; i < 5; i++)
        EXPECT_EQ(a[i], expected[i]);
}
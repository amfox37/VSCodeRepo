#include <iostream>
#include <string>

static int s_Level = 1;
static int s_Speed = 2;

int main()
{
    if (s_Level > 5)
    s_Speed = 10;
    else
    s_Speed = 5;

    std::cin.get();
}
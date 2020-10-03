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

    s_Speed = s_Level > 5 ? 10 : 5; // Another way to write the if else using ternary operator ( ? )

    std::string Rank;
    if (s_Level > 10)
        Rank = "Master";
    else
        Rank = "Beginner";  
         
    std::string otherRank = s_Level > 10 ? "Master" : "Beginner"; // Another way to write the if else using ternary operator ( ? )

    std::cout << otherRank << std::endl;

    std::cin.get();
}
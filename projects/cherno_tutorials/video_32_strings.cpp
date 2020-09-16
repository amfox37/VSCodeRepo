#include <iostream>

int main()
{
    const char* name = "Cherno";
    char name2[7] = {'C', 'h', 'e', 'r', 'n', 'o', '\0'};

    std::cout << name << std::endl;
    std::cout << name2 << std::endl;

    std::cin.get();
}
#include <iostream>
#include <string>

int main()
{
    std::string name = "Cherno"; // Char pointer of course
    char name2[7] = {'C', 'h', 'e', 'r', 'n', 'o', '\0'};

    std::cout << name << std::endl;
    std::cout << name2 << std::endl;

    std::cin.get();
}


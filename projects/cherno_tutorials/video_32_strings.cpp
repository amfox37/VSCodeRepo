#include <iostream>
#include <string>

int main()
{
    std::string name = "Cherno"; // Char pointer of course
    char name2[7] = {'C', 'h', 'e', 'r', 'n', 'o', '\0'};

    using namespace std::string_literals;
    std::string name0 = "Cherno"s + "hello";

    std::cout << name << std::endl;
    std::cout << name2 << std::endl;
    std::cout << name0 << std::endl;

    std::cin.get();
}


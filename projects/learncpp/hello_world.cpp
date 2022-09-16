// Instruction about how to set this up for the first time can be found here:
// https://code.visualstudio.com/docs/cpp/config-clang-mac#_reusing-your-c-configuration

#include <iostream>
 
int main()
{
 	std::cout << "Hello, world!";
    std::cin.clear(); // reset any error flags
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any characters in the input buffer until we find an enter character
    std::cin.get(); // get one more char from the user
	return 0;
}
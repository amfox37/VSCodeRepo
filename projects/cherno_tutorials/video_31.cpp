#include <iostream>

int main()
{
    /* code */
    int example[5];
    example[0] = 2; // Example is actually an integer pointer
    example[4] = 3;

    for (int i = 0; i < 5; i++)
    {
        example[i] = 2;
    }
    
    std::cout << example[4] << std::endl;

    std::cin.get();
}

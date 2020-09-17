#include <iostream>

class Entity
{
    public:
    float X, Y;

    void Print()
    {
        std::cout << X << ", " << Y << std::endl;
    }

    void Init()
    {
        X = 0.0f;
        Y = 0.0f;
    }
};

int main()
{
    Entity e;
    e.Init();
    std::cout << e.X << std::endl;
    e.Print();
    std::cin.get();
}
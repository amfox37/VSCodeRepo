#include <iostream>
#include <string>
#include <memory>

class Entity
{
    public:
    Entity() //Constructer
    {
        std::cout << "Created Entity!" << std::endl;
    }

    ~Entity() // Deconstructer 
    {
        std::cout << "Destroyed Entity!" << std::endl;
    }

    void Print() {} // A dummy thing

};

int main()
{
    {
        std::unique_ptr<Entity> entity = std::make_unique<Entity>();
        std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
        entity ->Print();
    }

    std::cin.get();
}
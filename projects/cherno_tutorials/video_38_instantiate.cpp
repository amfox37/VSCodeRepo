#include <iostream>
#include <string>

using String = std::string;

class Entity
{
    private:
    String m_Name;
    public:
    Entity() : m_Name("unknown") {}
    Entity(const String& name) : m_Name(name) {}

    const String& GetName() const { return m_Name; }
};

int main()
{ 
    Entity* e;
    {
        Entity entity("Andy"); // This is allocating on the stack...
        e = &entity;
        std::cout << entity.GetName() << std::endl;
    }
    std::cin.get();
}
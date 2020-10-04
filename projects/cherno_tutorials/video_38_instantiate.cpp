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
        Entity* entity = new Entity("Andy"); // This is now allocating on the heap, so survives outside {}...
        e = entity;
        std::cout << entity->GetName() << std::endl;
    }
    std::cin.get();
    delete e; // after using new keyword, now have to delete to free memory
}
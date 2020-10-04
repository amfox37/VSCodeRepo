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
    int a = 2;
    int* b = new int[50]; //an array of 200 bytes (50 * 4bytes)

    Entity* e = new Entity();

    delete e;
    delete[] b;

    std::cin.get();
}
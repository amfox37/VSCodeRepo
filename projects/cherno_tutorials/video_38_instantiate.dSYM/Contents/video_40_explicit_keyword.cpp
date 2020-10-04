#include <iostream>
#include <string>

class Entity
{
    private:
    std::string m_Name;
    int m_Age;

    public:
    Entity(const std::string& name) //"string reference"
        : m_Name(name), m_Age(-1) {}
    Entity(int age)
        : m_Name("unknown"), m_Age(age) {}
};

int main()
{
    Entity a("Andy");
    Entity b(45);

    std::cin.get();
}
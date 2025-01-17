#include <iostream>
#include <string>
#include <vector>

class Person
{
public:
    Person(const std::string& name, const std::string& surname)
        : _name { name }
        , _surname { surname }
    {}

    Person(const Person& other)
        : _name { other._name }
        , _surname { other._surname }
    {}

    std::string  get_full_name() const { return _name + " " + _surname; }
    unsigned int get_age() const { return _age; }

    void wait(unsigned int years) { _age += years; }

private:
    std::string  _name;
    std::string  _surname;
    unsigned int _age = 0u;
};

const std::vector<int> init()
{
    std::vector<int> tmp;
    tmp.emplace_back(1);
    tmp.emplace_back(2);
    return tmp;
}

std::ostream& operator<<(std::ostream& stream, const Person& person)
{
    return stream << "Person named '" << person.get_full_name() << "' is " << person.get_age()
                  << " years old.";
}

int main()
{
    Person batman { "Bruce", "Wayne" };
    batman.wait(23);

    Person copy = batman;

    std::cout << batman << std::endl;

    std::cout << "Person named '" << copy.get_full_name() << "' is " << copy.get_age() << " years old."
              << std::endl;

    auto        a   = init();
    std::string str = "abc";
    auto        pos = str.find("abc");

    std::cout << pos << std::endl;
    return 0;
}

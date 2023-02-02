#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    void set_name(const string& name) { _name = name; }
    void set_age(unsigned int age) { _age = age; }

    const string& get_name() const { return _name; }
    unsigned int  get_age() const { return _age; }

private:
    string       _name;
    unsigned int _age = 0u;
};

int main()
{
    Person p;

    p.set_name("Batman");
    p.set_age(23);

    cout << "Person named '" << p.get_name() << "' is " << p.get_age() << " years old." << endl;

    return 0;
}

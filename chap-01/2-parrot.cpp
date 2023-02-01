#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
    int number = 0;
    do
    {
        std::cin >> number;
        std::cout << "Craow " << number << "!" << std::endl;
    }
    while (number != -1); */

    /*
    int number = 0;
    for (size_t i = 0; i < 10; i++)
    {
        std::cin >> number;
        std::cout << "Craow " << number << "!" << std::endl;
    }*/

    for (int i = 0; i < 10; i++)
    {
        string word;
        cin >> word;
        cout << "Craow " << word << "!" << endl;
    }
    return 0;
}

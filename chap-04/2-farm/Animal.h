#pragma once

#include <iostream>

class Animal
{
public:
    virtual void sing() const { std::cout << "..." << std::endl; }
    virtual void sing(char next_char) const { std::cout << "..." << next_char; }
    virtual ~Animal() {}
};

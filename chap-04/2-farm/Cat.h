#pragma once

#include "Animal.h"

#include <iostream>

class Cat : public Animal
{
public:
    void sing() const override { std::cout << "Meow" << std::endl; }
    void sing(char next_char) const override { std::cout << "Meow" << next_char; }
};

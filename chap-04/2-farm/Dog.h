#pragma once

#include "Animal.h"

#include <iostream>

class Dog : public Animal
{
public:
    void sing() const override { std::cout << "Waf" << std::endl; }
    void sing(char next_char) const override { std::cout << "Waf" << next_char; }
};

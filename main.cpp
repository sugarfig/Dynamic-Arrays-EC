//Author: Erica Carballo
//Project name: Dynamic Arrays
//Description: This program creates dynamic arrays.
//Last Changed: February 28, 2021

#include <iostream>
#include "IntVector.h"

int main()
{
    IntVector vect;

    for (int i = 0; i < 10; i++)
    {
        vect.add(i);
    }

    for (int i = 0; i < vect.size(); i++)
    {
        std::cout << vect.get(i); //prints 0123456789
    }
//Author: Erica Carballo
    return 0;
}

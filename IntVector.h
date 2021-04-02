//
// Created by Erica on 2/28/2021.
//

#ifndef DYNAMICARRAYS_INTVECTOR_H
#define DYNAMICARRAYS_INTVECTOR_H
#include <iostream>

class IntVector
{
public:
    IntVector();
    void add(int item);
    void resize();
    int size();
    int get(int index);
//Author: Erica Carballo
private:
    int vSize;
    int itemAmount;
    int *arr;


};


#endif //DYNAMICARRAYS_INTVECTOR_H

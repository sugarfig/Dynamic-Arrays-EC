//
// Created by Erica on 2/28/2021.
//

#include "IntVector.h"

IntVector::IntVector()
{
    vSize = 1;
    itemAmount = 0;

    arr = new int[vSize];

    for (int i = 0; i < vSize; i++)
    {
        arr[i] = 0;
    }
}

void IntVector::add(int item)
{
    itemAmount = itemAmount + 1;

    if(itemAmount > vSize)
    {
        resize();
        //std::cout << "here";
    }

    int *temp = new int [vSize];

    for (int i = 0; i < itemAmount; i++)
    {
        temp[i] = arr[i];
        //std::cout << "array" << arr[i] << std::endl;
        //std::cout << "array temp" << temp[i] << std::endl;
    }
    temp[itemAmount- 1] = item;

    delete [] arr;
    arr = temp;


}
//Author: Erica Carballo
void IntVector::resize()
{
    vSize = vSize * 2;
    int *temp = new int [vSize];

    for (int i = 0; i < vSize / 2; i++)
    {
        temp[i] = arr[i];
        //std::cout << "array temp" << temp[i] << std::endl;
    }
    delete [] arr;
    arr = temp;
}

int IntVector::size()
{
    return itemAmount;
}

int IntVector::get(int index)
{
    //std::cout << index;
    for (int i = 0; i < itemAmount; i++)
    {
//        std::cout << "index" << index << std::endl;
//        std::cout << "array" << arr[i] << std::endl;
        if(index == arr[i])
        {
            //std::cout << "here" << std::endl;
            return arr[i];
        }
    }
}

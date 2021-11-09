#include "dynarr.h"
#include <iostream>
using namespace std;
dynArr::dynArr()
{
    data = NULL;
    size = 0;
}

dynArr::dynArr(int s)
{
    data = new int[s];
    size = s;
}

dynArr::~dynArr()
{
    delete[] data;
}

int dynArr::getValue(int index)
{
    return data[index];
}
void dynArr::setValue(int index, int value)
{
    data[index] = value;
}

void dynArr::allocate(int s)
{
    int *point = new int[s];
    for (int i = 0; i < size && i < s; i++)
    {
        point[i] = data[i];
    }
    delete[] data;
    data = point;
    for (int i = size; i < s; i++)
        data[i] = i;
    size = s;
}

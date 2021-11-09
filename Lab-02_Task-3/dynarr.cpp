#include "dynarr.h"
#include <iostream>
using namespace std;
dynArr::dynArr()
{
    data=NULL;
    row=0;
    column=0;
}

dynArr::dynArr(int row, int column)
{
    row=row;
    column=column;
    data=new int *[row];
    for(int i=0;i<row;i++)
    {
      data[i] = new int[column];
    }
}

dynArr::~dynArr()
{
    for (int i=0;i<row;i++)
    {
        delete[] data[i];
    }
    delete[] data;
}

int dynArr::getValue(int row, int column)
{
    return data[row][column];
}
void dynArr::setValue(int row, int column, int value)
{
    data[row][column] = value;
}

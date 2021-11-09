#include "dynarr.h"
#include <iostream>
using namespace std;
template <class Temp>
dynArr<Temp>::dynArr(int s)
{
data = new Temp[s];
size = s;
}
template <class Temp>
dynArr<Temp>::~dynArr()
{
delete [] data;
}
template <class Temp>
Temp dynArr<Temp>::getValue(int index)
{
return data[index];
}
template <class Temp>
void dynArr<Temp>::setValue(int index, Temp value)
{
data[index] = value;
}

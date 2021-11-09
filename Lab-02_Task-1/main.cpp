#include <iostream>
#include "dynarr.h"
using namespace std;

int main()
{
    dynArr dr1;
    dynArr dr2(5);
    int value,i=0;
    cout<<"Enter 5 values: ";
    while(i<5)
    {
        cin>>value;
        dr2.setValue(i,value);
        i++;
    }
    i=0;
    cout<<"Entered 5 values are: ";
    while(i<5)
    {
        cout<<dr2.getValue(i)<<" ";
        i++;
    }

    return 0;
}

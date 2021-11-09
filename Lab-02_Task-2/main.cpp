#include <iostream>
#include "dynarr.h"
using namespace std;
int main()
{
    dynArr dr(5);
    int x,s;
    cout << "Enter 5 values: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> x;
        dr.setValue(i, x);
    }
    cout << "Enter a size: ";
    cin >> s;
    dr.allocate(s);
    for (int i = 0; i < s; i++)
    {
        cout << dr.getValue(i) << "\t";
    }
    return 0;
}

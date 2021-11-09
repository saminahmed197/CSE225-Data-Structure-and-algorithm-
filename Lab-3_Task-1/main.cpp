#include <iostream>
#include "dynarr.cpp"
using namespace std;

int main()
{
    dynArr<int> array(5);
    int value;
    cout<<"Enter array element: ";
    for(int i=0;i<5;i++)
    {
        cin>>value;
        array.setValue(i,value);
    }
    cout << "Array elements are: ";
    for(int i=0;i<5;i++)
    {
        cout<<array.getValue(i)<<"\t";
    }
    return 0;
}

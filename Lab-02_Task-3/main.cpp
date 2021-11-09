#include <iostream>
#include "dynarr.h"
using namespace std;
int main()
{
    int row, column;
    cout<<"Enter row and column: ";
    cin>>row>>column;
    dynArr dr(row,column);
    int value;
    cout << "Enter values:\n";
    for (int i=0;i<row;i++)
    {
      for (int j=0;j<column;j++)
        {
            cin >> value;
            dr.setValue(i,j,value);
        }
    }
    cout << "Values are: \n";
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<column;j++)
        {
            cout<<dr.getValue(i,j)<<"\t";
        }
        cout << endl;
    }
    return 0;
}

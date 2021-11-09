#include <iostream>
#include "UnsortedType.h"
using namespace std;

int main()
{   int x;
    UnsortedType<int> unsort_list;
    int array[13]={1,1,0,5,0,2,1,5,4,1,5,4,3};
    for(int i=0; i<14;i++)
    {
        unsort_list.InsertItem(array[i]);
    }
    cout<<"The values of unsorted list are: "<<endl;
    while(unsort_list.GetNextItem(x)){
        cout<<x<<endl;
    }


    return 0;
}




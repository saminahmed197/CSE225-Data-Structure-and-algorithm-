#include <iostream>
#include "UnsortedList.cpp"
#include "SortedList.cpp"
using namespace std;

int main()
{   int x;
    UnsortedList<int> unsort_list;
    SortedList<int> sort_list;
    int array[13]={1,1,0,5,0,2,1,5,4,1,5,4,3};
    for(int i=0; i<14;i++)
    {
        unsort_list.InsertItem(array[i]);
    }
    cout<<"The values of unsorted list are: "<<endl;
    while(unsort_list.GetNextItem(x)){
        cout<<x<<endl;
    }

    for(int j=0; j<14;j++)
    {
        sort_list.InsertItem(array[j]);
    }
    cout<<"\n\nThe values of sorted list are: "<<endl;
    while(sort_list.GetNextItem(x)){
        cout<<x<<endl;
    }
    return 0;
}




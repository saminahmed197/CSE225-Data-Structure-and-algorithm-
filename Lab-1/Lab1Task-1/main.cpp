#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter an integer number:";
    cin>>n;
    int *point=new int[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<=n;i++)
    {
        cin>>point[i];
    }
    cout<<"Array elements are: ";
    for(int i=0;i<=n;i++)
    {
        cout<< point[i]<<"\t";
    }

    delete []point;
    point=NULL;
    return 0;
}

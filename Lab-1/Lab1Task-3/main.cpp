#include <iostream>

using namespace std;

int main()
{
     int row,column,r;

    cout<<"Enter row and column number:";
    cin>>row>>column;
    int rp[row];
    int **pointer=new int *[row];
    cout<<"Enter  array elements: "<<endl;
    for(int i=0;i<row;i++)
    {
        cout<<"Enter row size:";
        cin>>r;
        rp[i]=r;
        pointer[i]=new int[column];
             for(int j=0;j<r;j++)
             {
                 cin>>pointer[i][j];
             }

    }

    cout<<"Array elements are: "<<endl;
    for(int i=0;i<row;i++)
    {
              int rp1=rp[i];
             for(int j=0;j<rp1;j++)
            {
                 cout<<pointer[i][j]<<"\t";
            }
           cout<<endl;

    }

    for(int i=0;i<row;i++)
         delete []pointer[i];
    delete []pointer;
    pointer=NULL;
}

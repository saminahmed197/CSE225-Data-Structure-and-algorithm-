#include <iostream>

using namespace std;

int main()
{
     int row,column;
    cout<<"Enter row and column number:";
    cin>>row>>column;
    char **point=new char *[row];
    cout<<"Enter  array elements: ";
    for(int i=0;i<=row;i++)
    {
        point[i]=new char[column];
             for(int j=0;j<=column;j++)
             {
                 cin>>point[i][j];
             }
    }
    cout<<"Array elements are: \n";
    for(int i=0;i<=row;i++)
    {
        for(int j=0;j<=column;j++)
        {
            cout<<point[i][j]<<"\t";
        }
           cout<<"\n";
    }
    for(int i=0;i<=row;i++)
         delete []point[i];
    delete []point;
    point=NULL;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n=7;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    for(int i=n-2;i>=0;i--)
    {
        for(int j=0;j<i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    //cout << "Hello world!" << endl;
    return 0;
}

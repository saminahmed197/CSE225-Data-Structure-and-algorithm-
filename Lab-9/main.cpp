#include <iostream>
#include "quetype.cpp"
using namespace std;
int main()
{
    QueType<int> coin1;
    QueType<int> coin1_store;
    int n,total;
    cout<<"Give input for calculating no of coins: "; //Take input from user
    cin>>n;
    int coins[n];
    int result;
    for(int i = 0; i < n; ++i)
    {
        cin>>coins[i];
        coin1.Enqueue(3);
    }
    cin>>total;
    QueType<int> coin2;
    coin2.Enqueue(0);
    while(!coin1.IsEmpty())
    {
        int front=coin1.frontend();
        coin1_store.Enqueue(front);
        if(coin1.frontend()<=total)
        {
            int front1=coin1.frontend();
            coin2.Enqueue(INT_MAX);
            coin1.Dequeue(front1);
        }

    }
    int m=INT_MAX;

    while(!coin1_store.IsEmpty())
    {
        while(!coin2.IsEmpty())
        {
            if(coin1_store.frontend()<total)
            {
                int n=

            }
            coin2.Dequeue(coin2.frontend());
        }
        coin1_store.Dequeue(coin1.frontend());
    }
    if(amount==INT_MAX)
        result=-1;

cout<<result;

return 0;
}

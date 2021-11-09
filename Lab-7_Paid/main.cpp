#include <iostream>
#include "queuetype.cpp"
using namespace std;

int main()
{
    int queue_size=5;
    int value;
    QueType<int> q(queue_size);
    if(q.IsEmpty())
    {
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }
    q.Enqueue(5);
    q.Enqueue(7);
    q.Enqueue(4);
    q.Enqueue(2);
    if(q.IsEmpty())
    {
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }
    if(q.IsFull())
    {
        cout<<"Queue is full"<<endl;
    }
    else{
        cout<<"Queue is not full"<<endl;
    }
    q.Enqueue(6);
    cout<<"Elements are :";
     for (int i = 0; i < queue_size; i++)
   {
       q.Dequeue(value);
       cout << " " << value <<"\t";
       q.Enqueue(value);
   }
   if(q.IsFull())
    {
        cout<<"Queue is full"<<endl;
    }
    else{
        cout<<"Queue is not full"<<endl;
    }
     try
        {
                q.Enqueue(value);
        }
        catch(FullQueue e){
                cout<<"Queue Overflow"<<endl;
        }

    q.Dequeue(value);
    q.Dequeue(value);
    cout<<"Elements are :";
    for (int i = 0; i < queue_size-2; i++)
   {
       q.Dequeue(value);
       cout << " " << value <<"\t";
        q.Enqueue(value);
   }
   q.Dequeue(value);
   q.Dequeue(value);
    q.Dequeue(value);
    if(q.IsEmpty())
    {
        cout<<"\n Queue is empty"<<endl;
    }
    else{
        cout<<"\n Queue is not empty"<<endl;
    }
     try
        {
                q.Dequeue(value);
        }
        catch(EmptyQueue e){
                cout<<"Queue underflow"<<endl;
        }

    int n,count;
    cout<<"Enter an integer :";
    cin>>n;

    QueType<string> q1=QueType<string>(n+1);
    q1.Enqueue("1");
    while(count<=n-1)
    {
        string value1;
        q1.Dequeue(value1);
        count++;
        cout<<value1<<endl;
        string value2=value1+'0';
        q1.Enqueue(value2);
        string value3 = value1 + '1';
        q1.Enqueue(value3);
    }
    return 0;
}

#include <iostream>
#include "quetype.cpp"
using namespace std;

int main()
{
    int queue_size=5;
    QueType<int> q;
    int value,value1;
    q.Enqueue(3);
    q.Enqueue(4);
    q.Enqueue(5);
    q.Enqueue(6);
    q.Enqueue(8);
    q.ReverseQueue();
    cout<<"\nReverse queue is: ";
    for (int i = 0; i <queue_size ; i++)
    {
       q.Dequeue(value);
       cout << " " << value <<"\t";
       q.Enqueue(value);
    }
    //cout << "Hello world!" << endl;
    return 0;
}

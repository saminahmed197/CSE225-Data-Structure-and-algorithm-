#include <iostream>
#include "quetype.cpp"

using namespace std;

int main()
{
    QueType<int> queu_id;
    queu_id.Enqueue(1);
    queu_id.Enqueue(8);
    queu_id.Enqueue(1);
    queu_id.Enqueue(3);
    queu_id.Enqueue(3);
    queu_id.Enqueue(4);
    queu_id.Enqueue(5);
    queu_id.Enqueue(6);
    queu_id.Enqueue(4);
    queu_id.Enqueue(2);
    bool empty_queue= queu_id.IsEmpty();
    if(empty_queue==true)
    {
        cout<<"The queue is empty"<<endl;
    }
    else{
        cout<<"The queue is not empty"<<endl;
    }
    bool full_queue=queu_id.IsFull();
    if(full_queue==true)
    {
        cout<<"The queue is full"<<endl;
    }
    else{
        cout<<"The queue is not full"<<endl;
    }
    QueType<int> queu_id2;
    int value;
    cout<<"Id of the queue items are: ";
    while(!queu_id.IsEmpty())
    {
        queu_id.Dequeue(value);
        cout<<value<<"\t";
        queu_id2.Enqueue(value);
    }
    cout<<endl;
    cout<<"Removed elements are: ";
    for(int j=0;j<3;j++)
    {
        queu_id2.Dequeue(value);
        cout<<value<<"\t";
    }
    return 0;
}

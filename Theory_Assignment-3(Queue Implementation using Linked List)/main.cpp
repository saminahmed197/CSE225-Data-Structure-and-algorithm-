#include <iostream>
#include "quetype.cpp"  // .cpp file added to the main driver file
using namespace std;

int main()
{
    QueType<int> link; // object creation
    int number;
    int item,item_delete;
    int i=0;
    cout<<"Enter the number of items you want to add: ";
    cin>>number; // the number of items we want to add will store in this variable
    cout<<"\nEnter the items: ";
    while(i< number) // loop to take user inputs and add them into the queue list until the number
    {
        cin>>item;
        link.enQueue(item);  // every item will be enqueued into the queue list
        i++;
    }
    cout<<"\nRemoved item is: "<<endl;
    link.DeQueue(item_delete);  // it will remove the first item of the queue list
    if(link.IsEmpty()==true)  // finding if the list is empty or not
    {
        cout<<"\nThe list is empty"<<endl;  // if the list is empty then show this as message.
    }
    else
        cout<<"\nThe list is not empty"<<endl;  // if the list is not empty then show this as message.

    cout<<"\nThe list of values are: "<<endl;
    link.PrintQueeue();  // print the items in the queue list
    return 0;
}

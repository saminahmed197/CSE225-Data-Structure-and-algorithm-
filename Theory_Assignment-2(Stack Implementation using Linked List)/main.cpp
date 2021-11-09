#include <iostream>
#include "stacktype.cpp"
using namespace std;

int main()
{
    StackType<int> link; // object creation
    int number;
    int item;
    int i=0;
    cout<<"Enter the number of items you want to add: ";
    cin>>number; // the number of items we want to add will store in this variable
    cout<<"\nEnter the items: ";
    while(i< number) // loop to take user inputs and add them into the list of stack until the number
    {
        cin>>item;
        link.Push(item);  // every item will be pushed into the list of stack
        i++;
    }
    int pop_item=link.Pop();  // it will remove the last item of the list of stack
    cout<<"\nRemoved item is: "<<pop_item<<endl;
    if(link.IsEmpty()==true)  // finding if the list is empty or not
    {
        cout<<"\nThe list is empty"<<endl;  // if the list is empty then show this as message.
    }
    else
        cout<<"\nThe list is not empty"<<endl;  // if the list is not empty then show this as message.

    cout<<"\nThe list of values are: "<<endl;
    link.PrintStack();  // print the items in the list of stack
    return 0;
}

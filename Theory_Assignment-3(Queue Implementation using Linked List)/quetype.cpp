#include "quetype.h"
#include <iostream>
using namespace std;
template <class ItemType>
QueType<ItemType>::QueType()
{
    front = NULL; // front set to NULL by default when object is created
    rear = NULL;  // rear set to NULL by default when object is created
}
template <class ItemType>
bool QueType<ItemType>::IsEmpty()
{
    return (front == NULL); // to make the list of queue empty, the front is set to NULL since front pointer holds the first item's address of the list
}
template<class ItemType>
bool QueType<ItemType>::IsFull()
{
    NodeType* location;
    try  // try and catch block used to handle exception
    {
        location = new NodeType;
        delete location;
        return false;
    }
    catch(bad_alloc& exception)
    {
        return true;
    }
}
template <class ItemType>
void QueType<ItemType>::enQueue(ItemType newItem)
{
    if (IsFull())
        throw FullQueue(); // throw exception if the queue list is full
    else
    {
        NodeType* newNode;
        newNode = new NodeType; // new node pointer created
        newNode->info = newItem; //new node's info will have the new item to be stored in the queue list
        newNode->next = NULL;   // next node is set to null
        if (rear == NULL)  // check if the rear is NULL or not
            front = newNode; //if it is NULL then front node pointer indicated the new node pointer
        else
            rear->next = newNode; //otherwise rear's next node indicated the new node pointer
        rear = newNode;  // at last rear indicates ne node pointer
    }
}
template <class ItemType>
void QueType<ItemType>::DeQueue(ItemType& item)
{
    if (IsEmpty())
        throw EmptyQueue(); // throw exception if the queue list doesn't have item
    else
    {
        NodeType* tempPtr; // temporary pointer created.
        tempPtr = front;  // temporary pointer indicates the front pointer
        item = front->info; // item holds the item which will delete
        cout<<item<<endl;  // prints the item which will be deleted
        front = front->next; // front is updated by its next node
        if (front == NULL)  // check if front pointer is NULL or not
            rear = NULL; // if null then rear pointer is set to NULL too
        delete tempPtr;  // at last delete temporary pointer since it wont be used afterwards
    }
}
template <class ItemType>
void QueType<ItemType>::PrintQueeue()
{
    if (IsEmpty())
        throw EmptyQueue(); // throw exception if the the the queue list doesn't have item
    else{
        while(!IsEmpty()) // iterate till the list is empty.
        {
            NodeType* tempPtr;  // new pointer created
            tempPtr = front;    // temporary pointer indicates
            cout<<tempPtr->info<<endl; // it prints the item whose are in the queue list
            front = front->next; // front indicates its next node
            delete tempPtr;  // deleted temporary pointer since it wont be used afterwards
        }
    }


}

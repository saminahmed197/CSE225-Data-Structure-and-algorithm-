#include <iostream>
#include "stacktype.h"
using namespace std;
template <class ItemType>
StackType<ItemType>::StackType()
{
    topPtr = NULL; // after object creation the list top fill with null.
}
template <class ItemType>
bool StackType<ItemType>::IsEmpty()
{
    return (topPtr == NULL); // top pointer null returns true when the list of stack is empty otherwise false
}

template <class ItemType>
bool StackType<ItemType>::IsFull()
{
    NodeType* location; // location pointer
    try  // try catch block to face any exception
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
void StackType<ItemType>::Push(ItemType newItem)
{
    if (IsFull())
        throw FullStack(); // throw exception if the list of stack is full
    else
    {
        NodeType* location; // location pointer
        location = new NodeType;
        location->info = newItem; // new item added
        location->next = topPtr; // location is updated
        topPtr = location; // top pointer updated
    }
}
template <class ItemType>
int StackType<ItemType>::Pop()
{
    int item=0;
    if (IsEmpty())
        throw EmptyStack(); // throw exception if the the list of stack doesn't have item
    else
    {
        NodeType* tempPtr; // temporary pointer
        tempPtr = topPtr;
        topPtr = topPtr->next; // top pointer will be in the next node
        item= tempPtr->info; // it contains the item which is being removed from the the list of stack.
        delete tempPtr; // deleting temporary pointer
    }
    return item; // return the value which is being removed from the list of stack
}

template <class ItemType>
void StackType<ItemType>::PrintStack()
{
    if (IsEmpty())
        throw EmptyStack(); // throw exception if the the list of stack doesn't have item
    else{
        while(!IsEmpty()) // iterate till the list is empty.
        {
            NodeType* tempPtr;  // new pointer created
            tempPtr = topPtr;   // assigning the top pointer into the temporary pointer.
            topPtr = topPtr->next; // top pointer updated by its next item
            cout<<tempPtr->info<<endl; // it prints the item whose are in the list of stack.
            delete tempPtr;
        }
    }


}

template <class ItemType>
StackType<ItemType>::~StackType()
{
    NodeType* tempPtr;
    while (topPtr != NULL)
    {
        tempPtr = topPtr;
        topPtr = topPtr->next;
        delete tempPtr;
    }
}



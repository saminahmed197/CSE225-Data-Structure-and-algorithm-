#include "quetype.h"
#include <iostream>
using namespace std;
template <class ItemType>
QueType<ItemType>::QueType()
{
    front = NULL;
    rear = NULL;
}
template <class ItemType>
bool QueType<ItemType>::IsEmpty()
{
    return (front == NULL);
}
template<class ItemType>
bool QueType<ItemType>::IsFull()
{
    NodeType* location;
    try
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
void QueType<ItemType>::Enqueue(ItemType newItem)
{
    if (IsFull())
        throw FullQueue();
    else
    {
        NodeType* newNode;
        newNode = new NodeType;
        newNode->info = newItem;
        newNode->next = NULL;
        if (rear == NULL)
            front = newNode;
        else
            rear->next = newNode;
        rear = newNode;
    }
}
template <class ItemType>
void QueType<ItemType>::Dequeue(ItemType& item)
{
    if (IsEmpty())
        throw EmptyQueue();
    else
    {
        NodeType* tempPtr;
        tempPtr = front;
        item = front->info;
        front = front->next;
        if (front == NULL)
            rear = NULL;
        delete tempPtr;
    }
}
template <class ItemType>
ItemType QueType<ItemType>::frontend() //Function which will return the frist element of queue
{
return front->info;
}
template <class ItemType>
void QueType<ItemType>::MakeEmpty()
{
    NodeType* tempPtr;
    while (front != NULL)
    {
        tempPtr = front;
        front = front->next;
        delete tempPtr;
    }
    rear = NULL;
}
template <class ItemType>
void QueType<ItemType>::ReverseQueue()
{
     NodeType *tempPtr;
     NodeType* tempPtr1;
     NodeType *prevPtr;
     NodeType *nextPtr;
     prevPtr= NULL,
     nextPtr = NULL;
     tempPtr=front;
     tempPtr1= front;


     while (tempPtr1 != NULL) {
        nextPtr = tempPtr1->next;
        tempPtr1->next = prevPtr;
        prevPtr = tempPtr1;
        tempPtr1 = nextPtr;
    }
        front = prevPtr;
        rear = tempPtr;

}
template <class ItemType>
QueType<ItemType>::~QueType()
{
    MakeEmpty();
}


#include "quetype.h"
#include "StackType.cpp"

template<class ItemType>
QueType<ItemType>::QueType()
{

}
template<class ItemType>
QueType<ItemType>::~QueType()
{

}
template<class ItemType>
void QueType<ItemType>::MakeEmpty()
{
    while(!Stack1.IsEmpty())
    Stack1.Pop();
}
template<class ItemType>
bool QueType<ItemType>::IsEmpty()
{
    return Stack1.IsEmpty();
}
template<class ItemType>
bool QueType<ItemType>::IsFull()
{
    return Stack1.IsFull();
}
template<class ItemType>
void QueType<ItemType>::Enqueue(ItemType newItem)
{
    if (IsFull())
        throw FullQueue();
    else
    {
        Stack1.Push(newItem);
    }
}
template<class ItemType>
void QueType<ItemType>::Dequeue(ItemType& item)
{
    if (IsEmpty())
        throw EmptyQueue();
    while(!Stack1.IsEmpty())
    {
        Stack2.Push(Stack1.Top());
        Stack1.Pop();
    }
    item = Stack2.Top();
    Stack2.Pop();
    while(!Stack2.IsEmpty())
    {
        Stack1.Push(Stack2.Top());
        Stack2.Pop();
    }
}

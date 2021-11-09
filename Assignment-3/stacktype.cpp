#include "StackType.h"

template <class ItemType>
StackType<ItemType>::StackType()
{
    top = -1;
}
template <class ItemType>
bool StackType<ItemType>::IsEmpty()
{
    return (top == -1);
}
template <class ItemType>
bool StackType<ItemType>::IsFull()
{
    return (top == MAX_ITEMS-1);
}
template <class ItemType>
void StackType<ItemType>::Push(ItemType newItem)
{
    if(IsFull())
        throw FullStack();
    else{
        top++;
        items[top] = newItem;
    }
}
template <class ItemType>
void StackType<ItemType>::Pop()
{
    if(IsEmpty())
        throw EmptyStack();
    else
    {
        top--;
    }
}
template <class ItemType>
ItemType StackType<ItemType>::Top()
{
    if (IsEmpty())
        throw EmptyStack();
    return items[top];
}

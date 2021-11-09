#include "UnsortedList.h"
template <class ItemType>
UnsortedList<ItemType>::UnsortedList()
{
    length = 0;
    currentPos = -1;
}

template <class ItemType>
void UnsortedList<ItemType>::MakeEmpty()
{
    length = 0;
}

template <class ItemType>
bool UnsortedList<ItemType>::IsFull()
{
    return (length == MAX_ITEMS);
}

template <class ItemType>
int UnsortedList<ItemType>::LengthIs()
{
    return length;
}

template <class ItemType>
void UnsortedList<ItemType>::ResetList()
{
    currentPos = -1;
}

template <class ItemType>
bool UnsortedList<ItemType>::GetNextItem(ItemType& item)
{
    if(currentPos<length-1)
    {
        currentPos++;
        item = info [currentPos];
        return true;
    }
    return false;
}

template <class ItemType>
bool UnsortedList<ItemType>::RetrieveItem(ItemType& item)
{
    int location = 0;
    while ((location < length))
    {
        if(item == info[location])
        {
            item = info[location];
            return true;
        }
        else
        {
            location++;
        }
    }
    return false;
}
template <class ItemType>
bool UnsortedList<ItemType>::InsertItem(ItemType item)
{
    if(!IsFull())
    {
        if(RetrieveItem(item)==false)
        {
            info[length] = item;
            length++;
            return true;
        }

    }
    return false;
}

template <class ItemType>
bool UnsortedList<ItemType>::DeleteItem(ItemType item)
{
    int flag = 0;
    int location = 0;
    while (location < length )
    {
        if(item == info[location])
        {
            flag = 1;
            break;
        }
        location++;
    }
    if(flag==1)
    {
        info[location] = info[length - 1];
        length--;
        return true;
    }
    return false;
}


#include "SortedList.h"
#include <iostream>
using namespace std;
template <class ItemType>
SortedList<ItemType>::SortedList()
{
    length = 0;
    currentPos = - 1;
}
template <class ItemType> void SortedList<ItemType>::MakeEmpty()
{
    length = 0;
}
template <class ItemType>
bool SortedList<ItemType>::IsFull()
{
    return (length == MAX_ITEMS1);
}
template <class ItemType> int SortedList<ItemType>::LengthIs()
{
    return length;
}
template <class ItemType> void SortedList<ItemType>::ResetList()
{
    currentPos = - 1;
}
template <class ItemType>
bool SortedList<ItemType>::GetNextItem(ItemType& item)
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
bool SortedList<ItemType>::InsertItem(ItemType item)
{
    if(IsFull())
        return false;
    int midPoint=0, first = 0, last = length - 1;
    while ((first <= last) )
    {
        midPoint = (first + last) / 2;
        if(item < info[midPoint])
        {
            last = midPoint - 1;
        }
        else if(item > info[midPoint])
        {
            first = midPoint + 1;
        }
        else
        {
            return false;
        }
    }
    int location;
    if (item<info[midPoint])
        location = midPoint ;
    else if(item>info[midPoint])
        location= midPoint+1 ;

    for (int index = length; index > location; index--)
        info[index] = info[index - 1];
    info[location] = item;
    length++;
    return true;

}
template <class ItemType>
bool SortedList<ItemType>::DeleteItem(ItemType item)
{
     int midPoint, first = 0, last = length - 1,location=0;
    bool found = false;
    while ((first <= last) && RetrieveItem(item)==false)
    {

        midPoint = (first + last) / 2;
        if(item<info[midPoint])
        {
            last = midPoint - 1;

        }

        else if(item > info[midPoint])
        {
            first = midPoint + 1;

        }
        else
        {
            //item = info[midPoint];
            location=midPoint;
            found=true;
            break;
        }
    }
    if(found==false)
        return found;
    for (int index = location+1 ; index < length; index++)
        info[index - 1] = info[index];
    length--;
    return found;
}
template <class ItemType>
bool SortedList<ItemType>::RetrieveItem(ItemType& item)
{
    int midPoint, first = 0, last = length - 1;
    //bool found = false;
    while ((first <= last) )
    {
        midPoint = (first + last) / 2;
        if(item < info[midPoint])
        {
            last = midPoint - 1;
        }
        else if(item > info[midPoint])
        {
            first = midPoint + 1;
        }
        else
        {
            //found = true;
            item = info[midPoint];
            return true;
        }
    }
    return false;
}


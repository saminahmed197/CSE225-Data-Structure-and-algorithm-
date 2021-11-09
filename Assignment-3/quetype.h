#ifndef QUETYPE_H_INCLUDED
#define QUETYPE_H_INCLUDED
#include "stacktype.h"

class FullQueue
{};

class EmptyQueue
{};

template<class ItemType>
class QueType
{
public:
QueType();
~QueType();
void MakeEmpty();
bool IsEmpty();
bool IsFull();
void Enqueue(ItemType);
void Dequeue(ItemType&);
private:
StackType<ItemType> Stack1,Stack2;
};
#endif // QUETYPE_H_INCLUDED

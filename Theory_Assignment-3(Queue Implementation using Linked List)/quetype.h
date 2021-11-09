#ifndef QUETYPE_H_INCLUDED
#define QUETYPE_H_INCLUDED
class FullQueue
{};
class EmptyQueue
{};
template <class ItemType> // standard template library
class QueType
{
    struct NodeType //structure
    {
        ItemType info; // holds the item or data
        NodeType* next; //next pointer
    };
public: // public variables and methods
QueType();  // constructor
void MakeEmpty();  // delete all the items and make the queue empty
void enQueue(ItemType); // method of add item
void DeQueue(ItemType&); // method of removing an item
bool IsEmpty();  // method of finding if the list of queue is empty
bool IsFull();  // method of finding if the list of queue is full
void PrintQueeue();  // print method to print the list of queue
private: // private variables and methods
NodeType *front, *rear; // private pointer where front pointer holds the address of the starting item1q` and rear pointer holds the address of the last item
};
#endif // QUETYPE_H_INCLUDED


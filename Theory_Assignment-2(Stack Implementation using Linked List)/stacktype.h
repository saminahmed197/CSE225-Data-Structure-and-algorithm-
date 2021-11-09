#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED
class FullStack
{};
class EmptyStack
{};
template <class ItemType>  // standard template library
class StackType
{
struct NodeType //structure
{
ItemType info; // holds the item
NodeType* next; // next pointer
};
public: // public variables and methods
StackType();  // constructor
~StackType(); // destructor
void Push(ItemType);  // method of add item
int Pop();  // method of removing an item
bool IsEmpty();  // method of finding if the list of stack is empty
bool IsFull(); // method of finding if the list of stack is full
void PrintStack();  // print method to print the list of stack
private: // private variables and methods
NodeType* topPtr; // private pointer
};
#endif // STACKTYPE_H_INCLUDED

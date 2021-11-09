#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED
// Exception class used by Push when stack is full.
class FullStack
{};
// Exception class used by Pop and Top when stack is empty.
class EmptyStack
{};
template <class ItemType>
class StackType
{
struct NodeType
{
ItemType info;
NodeType* next;
};
public:
StackType();
~StackType();
void Push(ItemType);
void Pop();
ItemType Top();
bool IsEmpty();
bool IsFull();
private:
NodeType* topPtr;
};
#endif // STACKTYPE_H_INCLUDED

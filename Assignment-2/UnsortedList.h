#ifndef UNSORTEDLIST_H_INCLUDED
#define UNSORTEDLIST_H_INCLUDED
const int MAX_ITEMS = 6;
template <class ItemType>
class UnsortedList
{
public :
    UnsortedList();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    bool InsertItem(ItemType);
    bool DeleteItem(ItemType);
    bool RetrieveItem(ItemType&);
    void ResetList();
    bool GetNextItem(ItemType&);


private:
    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;
};

#endif // UNSORTEDLIST_H_INCLUDED


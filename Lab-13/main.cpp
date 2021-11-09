#include <iostream>
#include "binarysearchtree.cpp"
#include "quetype.cpp"
using namespace std;

int main()
{
    TreeType<int> tree_test;
    bool tree_empty=tree_test.IsEmpty();
    if(tree_empty==true)
    {
        cout<<"The tree is empty"<<endl;
    }
    else
    {
        cout<<"The tree is not empty"<<endl;
    }
    int tree_item[10]={4,9,2,7,3,11,17,0,5,1};
    for(int i=0;i<10;i++)
    {
        tree_test.InsertItem(tree_item[i]);
    }
    tree_empty=tree_test.IsEmpty();
    if(tree_empty==true)
    {
        cout<<"The tree is empty"<<endl;
    }
    else
    {
        cout<<"The tree is not empty"<<endl;
    }
    int tree_len=tree_test.LengthIs();
    cout<<"Length of the tree is: "<<tree_len<<endl;
    bool find;
    int item=9;
    tree_test.RetrieveItem(item,find);
    if(find==true)
    {
        cout<<"The item is found"<<endl;
    }
    else
    {
        cout<<"The tree is not found"<<endl;
    }
    item=13;
    tree_test.RetrieveItem(item,find);
    if(find==true)
    {
        cout<<"The item is found"<<endl;
    }
    else
    {
        cout<<"The tree is not found"<<endl;
    }
    cout<<"\nElements in the tree (In-order): ";
    tree_test.Print();
    cout<<"\nElements in the tree (Pre-order): ";
    tree_test.ResetTree(PRE_ORDER);
    cout<<"\nElements in the tree (Post-order): ";
    tree_test.ResetTree(POST_ORDER);
    for(int j=0;j<10;j++)
    {
        tree_test.DeleteItem(tree_item[j]);
    }
    int sequence[10]={11,9,4,2,7,3,17,0,5,1};
    TreeType<int> small_tree;
    for(int j=0;j<10;j++)
    {
        tree_test.InsertItem(sequence[j]);
    }

    return 0;
}

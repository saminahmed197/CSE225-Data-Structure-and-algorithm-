#include <iostream>
#include "BinarySearchTree.h"
using namespace std;

int main()
{
    int n = 0;
    cout<<"Enter node number: ";
    cin>>n;
    cout<<"Enter elements: ";
    TreeType<int> inputTree;
    for(int i=0; i<n; i++){
        int in = 0;
        cin>>in;
        inputTree.InsertItem(in);
    }
    cout<<" Output:- "<<endl;
    //inputTree.LeafNode();
    inputTree.HeightOfTree();

    return 0;
}

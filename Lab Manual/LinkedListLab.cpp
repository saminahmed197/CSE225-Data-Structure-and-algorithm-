#include<iostream>
using namespace std;

class Node{
public:
    int value;
    Node *next;
};

class LinkedList{
private:
    Node *head;
public:
    LinkedList(){
        head=NULL;
    }

    // Adds a node with value val
    // at the end of the list
    void addNode(int val){
        Node *n = new Node;
        n->value = val;
        n->next = NULL;

        if(head==NULL){
            head=n;
        }else{
            Node *p = head;
            while(p->next!=NULL){
                p=p->next;
            }
            p->next = n;
        }
    }

    // Prints the value of each node
    void printList(){
        Node *p = head;
        if(head == NULL){
            cout << "List is empty.";
        }
        while(p!=NULL){
            cout<<p->value<<"->";
            p=p->next;
        }
        cout<<endl;
    }

    // Checks if a node with a specific
    // value exists in the list
    bool findNode(int val){
        return false;
    }

    // Prints the value of the last node
    void printLastNode(){

    }

    // Prints the value of the middle node
    // if the list has even number of nodes then print
    // the value of the two middle nodes
    void printMiddleNode(){

    }
};

int main(){
    // Create a linked list
    // Add some nodes to the list
    // Print the list
    // Test the findNode() function (for both true and false)
    // Test the printLastNode() function
    // Test the printMiddleNode() function
}

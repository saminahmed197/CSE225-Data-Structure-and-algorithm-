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
         Node * p = head;
        if(head == NULL){
            cout << "List is empty.";
        }
        while(p!=NULL){
            if(p->value == val){
                return true;
            }
            p=p->next;
        }
        return false;
    }

    // Prints the value of the last node
    void printLastNode(){
        Node * p = head;

        if(head == NULL){
            cout << "Linked list is empty";
        }
        while(p->next != NULL){
            p=p->next;
        }

            cout<<"Last node of the linked list is: "<<p->value<<endl;

    }

    // Prints the value of the middle node
    // if the list has even number of nodes then print
    // the value of the two middle nodes
    void printMiddleNode(){
        int count = 0;
        int middle;
        Node * p = head;
        if(head == NULL){
            cout << "Linked list is empty.";
            return;
        }
        while(p!=NULL){
            count++;
            p=p->next;
        }

        if(count % 2 == 0){

            Node *point=head;

            int mid = count/2;

            for(int i = 1; i < mid; i++){
                point = point->next;
            }
            middle=(point->value + point->next->value)/2;
            cout <<"Middle node of the linked list is: "<<middle<<endl;
        }
            else{

            Node * point = head;

            int mid = count/2;

            for(int i = 0; i < mid; i++){
                point = point->next;
            }

            cout << point->value << endl;
        }
    }
};

int main(){
    // Create a linked list
    // Add some nodes to the list
    // Print the list
    // Test the findNode() function (for both true and false)
    // Test the printLastNode() function
    // Test the printMiddleNode() function
    LinkedList link_list;
    link_list.addNode(12);
    link_list.addNode(20);
    link_list.addNode(16);
    link_list.addNode(14);
    link_list.addNode(24);
    link_list.addNode(34);
    link_list.addNode(2);
    link_list.addNode(9);

    link_list.printList();
    bool finder=link_list.findNode(20);
    if(finder==true)
        cout<<"\n Node is in the linked list"<<endl;
    else
        cout<<"\n Node is not in the linked list"<<endl;
    bool finder1=link_list.findNode(1);
    if(finder1==true)
        cout<<"\n Node is in the linked list"<<endl;
    else
        cout<<"\n Node is not in the linked list"<<endl;
    link_list.printLastNode();
    link_list.printMiddleNode();
    return 0;
}


#include<iostream>
using namespace std;

class Contact{
public:
    string name;
    string phoneNumber;
    Contact *next;
};

class ContactBook{
private:
    Contact *head;
public:
    ContactBook(){
        head=NULL;
    }

    // Adds a contact in the book
    // so that the contacts are always sorted
    // in ascending order (by name)
    void addContact(string name, string phone){

        Contact *point=new Contact();
        point->name=name;
        point->phoneNumber=phone;
        point->next=NULL;

        if(head==NULL)
        {
            head=point;
            return ;
        }
        else if(name< head->name)
        {
            point->next=head;
            head=point;
            return ;
        }


        Contact *temp1=head;
        Contact * temp2=head->next;

        while(temp2!=NULL)
        {
            if(name < temp2->name)
            {
                point->next=temp2;
                temp1->next=point;
                return;
            }
            temp1=temp2;
            temp2=temp2->next;
        }
        temp1->next=point;
}

    // Prints all the contacts in the book
    void printList(){

        Contact * point=head;
        while(point!=NULL)
        {
            cout<<"Contact name is: " <<point->name<<endl;
            cout<<"Contact number is: "<<point->phoneNumber<<endl;
            point=point->next;
        }
    }

    // Searches contact book for a phone number
    // and returns the memory address of the contact.
    // If nothing is found, returns NULL.
    Contact* searchByPhoneNumber(string phNo){
        Contact * point=head;
        while(point!=NULL)
        {
            if( point->phoneNumber == phNo){
             return point;
            }
            point=point->next;
        }
        return point;
    }

    // Deletes a contact by phone number
    void deleteByPhoneNumber(string phNo){

        if(phNo==head->phoneNumber)
        {
            Contact * point=head;
            head=head->next;
            delete point;
            return;
        }
        Contact * temp1=head;
        Contact * temp2=head->next;
        while(temp2!=NULL)
        {
            if( temp2->phoneNumber==phNo)
            {
                temp1->next=temp2->next;
                cout<<"\nThe phone number is deleted"<<endl;
                delete temp2;
                return ;
            }
            temp1=temp2;
            temp2=temp2->next;
        }

    }
};

int main(){
    // Create a contact book
    // Add 5 contacts
    // Print the book
    // Test the searchByPhoneNumber() function
    // Test the deleteByPhoneNumber() function
    // Print the book
    ContactBook cont_list;
    cont_list.addContact("Sakib","01342876783");
    cont_list.addContact("Najmus","01542876783");
    cont_list.addContact("Niloy","01842876783");
    cont_list.addContact("Harun","01742876783");
    cont_list.addContact("Kamal","01942876783");
    cont_list.addContact("Jamal","01642876783");
    cont_list.printList();
    Contact * finder=cont_list.searchByPhoneNumber("01342876783");
    if(finder!=NULL)
    {
        cout<<"\nSearched contact name is: "<<finder->name<<endl;
        cout<<"Searched contact number is: "<<finder->phoneNumber<<endl;
    }
    else
    {
        cout<<"Contact is not in the contact list"<<endl;
    }

    cont_list.deleteByPhoneNumber("01342876783");
    cont_list.printList();
}

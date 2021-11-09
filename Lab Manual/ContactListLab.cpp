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
    ContactList(){
        head=NULL;
    }

    // Adds a contact in the book
    // so that the contacts are always sorted
    // in ascending order (by name)
    void addContact(string name, string phone){

    }

    // Prints all the contacts in the book
    void printList(){

    }

    // Searches contact book for a phone number
    // and returns the memory address of the contact.
    // If nothing is found, returns NULL.
    Contact* searchByPhoneNumber(string phNo){

    }

    // Deletes a contact by phone number
    void deleteByPhoneNumber(string phNo){

    }
};

int main(){
    // Create a contact book
    // Add 5 contacts
    // Print the book
    // Test the searchByPhoneNumber() function
    // Test the deleteByPhoneNumber() function
    // Print the book
}

#include <iostream>
#include "unsortedtype.h"
#include "studentInfo.h"
using namespace std;

int main()
{
    UnsortedType<int> unsort;
    unsort.InsertItem(5);
    unsort.InsertItem(7);
    unsort.InsertItem(6);
    unsort.InsertItem(9);
    int value;
    bool found;
    cout<<"List of the values are: ";
    for(int i=0;i<unsort.LengthIs();i++) {
        unsort.GetNextItem(value);
        cout<<value<<"  ";
    }
    cout<<"\nLength of the list is: "<<unsort.LengthIs()<< endl;
    unsort.InsertItem(1);
    unsort.ResetList();
    cout<<"List of the values are: ";
    for(int i=0;i<unsort.LengthIs();i++) {
        unsort.GetNextItem(value);
        cout<<value<<"  ";
    }
    value = 4;
    unsort.RetrieveItem(value,found);
    if(found==true)
    {
        cout<<"\nItem is found\n";
    }
    else{
        cout<<"\nItem is not found\n";
    }
    value = 5;
    unsort.RetrieveItem(value,found);
    if(found==true)
    {
        cout<<"Item is found"<<endl;
    }
    else{
        cout<<"Item is not found"<<endl;
    }
    value = 9;
    unsort.RetrieveItem(value,found);
    if(found==true)
    {
        cout<<"Item is found"<<endl;
    }
    else{
        cout<<"Item is not found"<<endl;
    }
    value = 10;
    unsort.RetrieveItem(value,found);
    if(found==true)
    {
        cout<<"Item is found"<<endl;
    }
    else{
        cout<<"Item is not found"<<endl;
    }
    if(unsort.IsFull())
    {
        cout<<"Item is found"<<endl;
    }
    else{
        cout<<"Item is not found"<<endl;
    }
    unsort.DeleteItem(5);
    if(unsort.IsFull())
    {
        cout<<"Item is found"<<endl;
    }
    else{
        cout<<"Item is not found"<<endl;
    }
    unsort.DeleteItem(1);
    unsort.ResetList();
    cout<<"List of the values are: ";
    for(int i=0;i<unsort.LengthIs();i++) {
        unsort.GetNextItem(value);
        cout<<value<<"  ";
    }
    cout << endl;
    unsort.DeleteItem(6);
    unsort.ResetList();
    cout<<"List of the values are: ";
    for(int i=0;i<unsort.LengthIs();i++) {
        unsort.GetNextItem(value);
        cout<<value<<"  ";
    }
    cout << endl;
    UnsortedType<studentInfo> student;
    studentInfo st1(15234,"Jon",2.6);
    studentInfo st2(13732,"Tyrion",3.9);
    studentInfo st3(13569,"Sandor",1.2);
    studentInfo st4(15467,"Ramsey",3.1);
    studentInfo st5(16285,"Arya",3.1);
    student.InsertItem(st1);
    student.InsertItem(st2);
    student.InsertItem(st3);
    student.InsertItem(st4);
    student.InsertItem(st5);
    student.DeleteItem(st4);
    student.RetrieveItem(st3, found);
    if(found==true){
        cout<<"Item is found"<<endl;
        st3.print();
    } else {
        cout<<"Item is not found"<<endl;
    }
    studentInfo stu;
    cout<<"Student information: "<<endl;
    for(int i=0;i<student.LengthIs();i++) {
        student.GetNextItem(stu);
        stu.print();
    }
    return 0;

}

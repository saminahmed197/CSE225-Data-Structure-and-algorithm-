#include<iostream>
#include "unsortedtype.cpp"
using namespace std;

int main(){
    UnsortedType<int> unsort_list1,unsort_list2,unsort_list_ascending;
    int item1,item2;
    int array1[11]={10,1,5,6,10,14,20,25,31,38,40};
    int array2[13]={12,2,4,7,9,16,19,23,24,31,35,36,42};
    for(int i=0;i<11;i++){
        unsort_list1.InsertItem(array1[i]);
    }
    for(int i=0;i<13;i++){
        unsort_list2.InsertItem(array2[i]);
    }
    int length1=0,length2=0;
    unsort_list1.GetNextItem(item1);
    unsort_list2.GetNextItem(item2);
    while(length1<unsort_list1.LengthIs() && length2<unsort_list2.LengthIs()){
        if (item1>item2){
            unsort_list_ascending.InsertItem(item1);
            length1++;
            if (length1<unsort_list1.LengthIs())
            {
                unsort_list1.GetNextItem(item1);
            }


        }else{
            unsort_list_ascending.InsertItem(item2);
            length2++;
            if (length2<unsort_list2.LengthIs())
                unsort_list2.GetNextItem(item2);

        }

    }


    while (length1<unsort_list1.LengthIs()){
        unsort_list_ascending.InsertItem(item1);
            length1++;
            if (length1<unsort_list1.LengthIs())
                unsort_list1.GetNextItem(item1);
    }

    while (length2<unsort_list2.LengthIs()){
        unsort_list_ascending.InsertItem(item2);
            length2++;
            if (length2<unsort_list2.LengthIs())
                unsort_list2.GetNextItem(item2);
    }

    int item;
    int i =0;
    cout<<"Output of two unsorted list: ";
    while (i<unsort_list_ascending.LengthIs()){
        unsort_list_ascending.GetNextItem(item);
        cout<<item<<" ";
        i++;
    }
    return 0;
}

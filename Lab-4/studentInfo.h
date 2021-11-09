#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"
using namespace std;
class studentInfo {
    public:
    int ID;
    string name;
    double cgpa;

    studentInfo() {
        ID = 0;
        name = "";
        cgpa = 0.0;
    }

    studentInfo(int i, string n, double c) {
        ID = i;
        name = n;
        cgpa = c;
    }
    bool operator==(studentInfo &st) {
        return (ID==st.ID && name == st.name && cgpa == st.cgpa);
    }
    bool operator!=(studentInfo &st) {
        return (ID!=st.ID || name != st.name || cgpa != st.cgpa);
    }
    void print() {
        cout << ID << ", " << name << ", " << cgpa << endl;
    }
};

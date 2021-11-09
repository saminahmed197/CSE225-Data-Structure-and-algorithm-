#include <iostream>
#include "complex.cpp"

using namespace std;

int main()
{
    Complex comp(40.0,60.0);
    Complex compl(20.0,40.0);
    Complex result;
    result=comp+compl;
    result.Print();
    //cout << "Output- " <<comp!=compl<<endl;
    return 0;
}

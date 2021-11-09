#include <iostream>

using namespace std;

double ncr(int n, int r) {
   if(r == 0) {
       return 1;
   } else if(r == 1) {
       return n;
   } else {
       ncr(n-1, r-1) * (n)/(double)(r);
   }
}

int main() {
   int n;
   int r;
   cout << "Enter n:";
   cin >> n;
   cout << "Enter r:";
   cin >> r;
   cout << n << "C" << r << " is " << ncr(n, r) << endl;
   return 0;
}


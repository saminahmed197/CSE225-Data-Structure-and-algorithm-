#include <iostream>
#include <cmath>
using namespace std;
int fib(int n);
int factorial(int n);
int sumOfDigits(int x);
int findMin(int a[], int size);
int DecToBin(int dec);
double SumInvSeries(int n);
int main()
{
    int fibonacci_num=fib(5);
    cout << "Nth fibonacci number is: "<<fibonacci_num << endl;
    int factorial_num=factorial(5);
    cout << "Factorial number is: "<<factorial_num << endl;
    int digit_num=sumOfDigits(53);
    cout << "Sum of digit is: "<<digit_num << endl;
    int arra[] = {20,50,76,1,2,8};
    cout<<"Minimum value of the array is: "<<findMin(arra,6)<<endl;
    int dec_bin=DecToBin(5);
    cout << "Binary number is: "<<dec_bin << endl;
    double inv_series=SumInvSeries(5);
    cout << "Sum of inverse number is: "<<inv_series << endl;
    return 0;
}

int fib(int n)
{
     if(n==0) {
      return n;
   }
   else if(n==1) {
      return n;
   }
   else {
      return(fib(n-1)+fib(n-2));
   }
}

int factorial(int n)
{
    if(n==0) {
      return 1;
   }
   else if(n==1) {
      return 1;
   }
   else {
      return n*factorial(n-1);
   }
}

int sumOfDigits(int x)
{
    if (x==0){
        return 0;
    }
    else{
        return (x % 10 + sumOfDigits(x / 10));
    }
}

int findMin(int a[], int size)
{
    if (size==1)
    {
        return a[0];
    }
    else{
        return min(a[size-1], findMin(a, size-1));
    }
}

int DecToBin(int dec)
{
    if (dec == 0)
    {
        return 0;
    }
    else
    {
        return (dec%2+10*DecToBin(dec/2));
    }

}

double SumInvSeries(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return (1/(pow(2, n-1)) + SumInvSeries(n - 1));
    }
}

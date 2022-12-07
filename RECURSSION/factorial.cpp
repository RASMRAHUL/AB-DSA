#include <iostream>
using namespace std;
int fact(int s)
{
    if (s == 0 || s == 1)
        return 1;
    else
        return fact(s - 1) * s;
}
int main()
{
    int n, r;
    cout<<"Enter the number:";
    cin>> n;
    r = fact(n);
    cout<<"Factorial of "<<n <<" is "<<r<<endl;
    return 0;
}
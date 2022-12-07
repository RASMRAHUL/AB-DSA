#include<iostream>
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
    int n , r;
    cout<<"Enter the value of nPr :"<<endl;
    cin>>n>>r;
    float permutation = fact(n)/fact(n-r);
    cout<<"Permutation is " <<permutation<<endl;
}
#include<iostream>
using namespace std;
int power(int m ,int n)
{
    if(n==0)
        return 1;
    return power(m,n-1)*m;    

}
int main()
{
    int m,n,r;
    cout<<"Enter the value of m and n:";
    cin>>m>>n;
    r=power(m,n);
   cout<<"The value is "<<r<<endl;


return 0;
}
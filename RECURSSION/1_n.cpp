#include<iostream>
using namespace std;

void print(int n)
{
    if(n <= 0)
        return ;
    // For printing 1 to n i.e 1, 2, 3, 4, 5......n;
    // print(n-1);
    // cout<<n<<" ";

    // For printing n to 1 i.e n, n-1, .....3, 2, 1;
    cout<<n<<" ";
    print(n-1);
}
int main()
{
    int n ;
    cout<<"Enter the number:";
    cin>>n;
    print(n);
    return 0;
}
#include <iostream>
using namespace std;
// using pascal's triangle;
int NCR(int n, int r)
{
    if (n == r || r == 0)
        return 1;
    return NCR(n - 1, r - 1) + NCR(n - 1, r);
}
// int fact(int s)
// {
//     if (s == 0 || s == 1)
//         return 1;
//     else
//         return fact(s - 1) * s;
// }
int main()
{
    int n, r;
    cout << "Enter the value of nCr :" << endl;
    cin >> n >> r;
    //float Combination = fact(n) / (fact(n - r) * fact(r));
    // cout << "Combination is " << Combination << endl;
    cout << "Combination is " << NCR(n,r) << endl;
}
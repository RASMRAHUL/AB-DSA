#include <iostream>
using namespace std;
// using recursions to solve taylor series;
double e(int x, int n)
{
    static double s;
    if (n == 0)
        return s;
    s = 1 + x * s / n;
    return e(x, n - 1);
}



// double e(int x, int n)
// {
//     static double p = 1, f = 1;
//     double r;

//     if (n == 0)
//         return 1;
//     r = e(x, n - 1);
//     p = p * x;
//     f = f * n;
//     return r + p / f;
// }
int main()
{
    cout << e(4, 15) << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int fib(int v) // 3
{
    if (v == 0)
        return 0;
    if (v == 1)
        return 1;
    int r = fib(v - 1); // 2
    int y = fib(v - 2); // 1
    return r + y;
}
int main()
{
    int r = fib(10);
    cout << r << endl;
    return 0;
}
// time complexity 2^N;
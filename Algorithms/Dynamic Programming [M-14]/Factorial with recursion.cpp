#include <bits/stdc++.h>
using namespace std;
int fac(int n)
{
    if (n == 1)
        return 1;
    int mul = fac(n - 1);
    return n * mul;
}
int main()
{
    int r = fac(6);
    cout << r << endl;
    return 0;
}
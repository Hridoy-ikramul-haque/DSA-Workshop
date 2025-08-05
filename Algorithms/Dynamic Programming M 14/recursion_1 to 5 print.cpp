#include <bits/stdc++.h>
using namespace std;
int recur(int val, int sum)
{
    // cout << val << endl; // print 1 to 5
    if (val > 5)
        return sum;
    sum = sum + val;
    recur(val + 1, sum);
    // cout << sum << endl; // print 5 to 1
}
int recur2(int n)
{
    if (n > 5)
        return 0;
    int r = recur2(n + 1);
    return r + n;
}
int main()
{
    int sum = 0;
    int result = recur(1, sum);
    int final = recur2(1);
    cout << result << endl;
    cout << final << endl;
    return 0;
}
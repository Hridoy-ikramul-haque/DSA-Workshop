/*
when we declared the vector , we need to  specify its size or resize it before trying to assign values to its elements using val[i] = value;.

When we try to access an element at index i (like val[i]), but the vector isn't yet large enough to hold that many elements, it leads to a runtime error.

sol->

Resize the vector before assigning values to it.

Use push_back to add elements to the vector dynamically.

When we subtract (odd-odd) always find even.
when we evenly sum odd value always find even.
when we oddly sum odd value always find odd.
odd+even= odd;
odd-odd=even;

*/

// https://codeforces.com/problemset/problem/621/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int range;
    cin >> range;
    vector<long long int> val;
    long long int result = 0;
    long long int min_odd = LLONG_MAX;
    bool flag = false;

    for (int i = 0; i < range; i++)
    {
        long long input;
        cin >> input;
        // val[i] = input;
        val.push_back(input);
    }
    // for (auto x : val)
    // {
    //     cout << x << endl;
    // }
    // logic
    for (int i = 0; i < range; i++)
    {
        result += val[i];

        // finding minimum odd value;
        if (val[i] % 2 != 0)
        {
            flag = true;
            min_odd = min(min_odd, val[i]);
        }
    }

    // cout << min_odd << endl;
    if (result % 2 == 0)
    {
        cout << result << endl;
    }
    else if (flag)
    {
        cout << result - min_odd << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}
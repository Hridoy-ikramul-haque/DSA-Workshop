// https://codeforces.com/problemset/problem/1843/B
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        int count = 0;
        long long sum = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += abs(arr[i]);
            if (arr[i] < 0)
            {
                if(!flag)
                {
                    count++;
                    flag = true;
                }
            }
            else if(arr[i]!=0)
            {
                flag = false;
            }
        }
        cout << sum << " " << count << endl;
    }

    return 0;
}
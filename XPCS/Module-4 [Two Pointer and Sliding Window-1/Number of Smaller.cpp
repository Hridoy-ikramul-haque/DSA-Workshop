//https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    vector<int> arr1(a),arr2(b),result(b,0);
    for (int i = 0; i < a;i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < b;i++)
    {
        cin>>arr2[i];
    }
    int l = 0, r = 0,count=0;
    while(l<b)
    {
        if(r<a && arr2[l]>arr1[r])
        {
            count++;
            r++;
        }
        else{
            result[l] = count;
            l++;
        }
    }
        for (auto x : result)
        {
            cout << x << " ";
        }
        return 0;
}
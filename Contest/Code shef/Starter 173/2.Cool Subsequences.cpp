//https://www.codechef.com/problems/COOLSUB
#include <bits/stdc++.h>
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
        vector<int> result;
        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        bool seq = true;
        for (auto &x : freq)
        {
            if(x.second>1)
            {
                cout << 1 << endl
                     << x.first << endl;
                seq = false;
                break;
            }
        }
        if(seq)
        {
            cout << -1 << endl;
        }
        
    }

    return 0;
}

    // 8-2 
    // 4-1 
    // 2-3
    // 1-1
    // 3-1
    // 5-1
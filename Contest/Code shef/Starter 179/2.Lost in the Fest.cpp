//https://www.codechef.com/problems/MDGT
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n,count=-1;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n;i++)
        {
            cin >> arr[i];
        }
        int bhhomi = n - 1;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]>=arr[n-1])
            {
                count = i;
                break;
            }
        }
        cout <<bhhomi-count<< endl;
    }

    return 0;
}

// 2 9 
//5 6 
// 5 6 
//(0,9-0)==0
// 0 
// 9-0 

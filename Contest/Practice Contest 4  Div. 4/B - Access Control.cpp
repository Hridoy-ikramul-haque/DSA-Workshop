#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        bool valid = true;
        int swipe = 0;
        for (auto x : s)
        {
            if(x=='1')
            {
                swipe = b;
            }
            else{
                if(swipe==0)
            {
                valid = false;
            }
                swipe--;
            }
            
            
        }
        cout << (valid? "yes" : "no")<<endl;
    }
//10110 - 1/2 0/1 1/2 1/2 
    return 0;
}
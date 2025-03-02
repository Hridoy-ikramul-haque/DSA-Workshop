// https://leetcode.com/problems/keys-and-rooms/
#include <bits/stdc++.h>
using namespace std;
bool canVisit(vector<vector<int>> &rooms)
{
    queue<int> q;
    int c_size = rooms.size();
    vector<bool> vis(c_size, false); // O(N)
    vis[0] = true;
    q.push(0);
    while (!q.empty()) // O(V+E)-> O(R+K)
    {
        int f = q.front();
        q.pop();
        for (int val : rooms[f])
        {
            if (!vis[val])
            {
                q.push(val);
                vis[val] = true;
            }
        }
    }
    bool flag = true;
    for (int i = 0; i < c_size; i++) // O(N)->O(V)
    {
        if (vis[i] == false)
            flag = false;
    }
    if (flag)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    vector<vector<int>> rooms = {{1, 3}, {3, 0, 1}, {2}, {0}};
    cout << canVisit(rooms);
    // pass this rooms and need ton find out can we visit all the rooms or not.
    return 0;
}
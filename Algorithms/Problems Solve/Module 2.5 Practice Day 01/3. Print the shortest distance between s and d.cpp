// Question: You will be given an undirected graph as input. Then you will be given a query Q. For each query, you will be given source S and destination D. You need to print the shortest distance between S and D. If there is no path from S to D, print -1.

#include <bits/stdc++.h>
using namespace std;
// vector<vector<int>> adj_list(1005);
vector<int> adj_list[1005];
vector<bool> vis(1005, false);
vector<int> level(1005, -1);
int v, e;
void bfs(int s, int d)
{
    fill(level.begin(), level.end(), -1); // O(V)
    fill(vis.begin(), vis.end(), false);  // O(V)

    queue<int> q;
    vis[s] = true;
    level[s] = 0;
    q.push(s);

    while (!q.empty()) // O(V+E)
    {
        int p = q.front();
        q.pop();
        for (int c : adj_list[p])
        {
            if (!vis[c])
            {
                q.push(c);
                vis[c] = true;
                level[c] = level[p] + 1;
            }
        }
    }
    cout << level[d] << endl;
}
int main()
{
    cin >> v >> e;
    // store all given path
    while (e--) // O(E)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a); // for undirected
    }
    int t;
    cin >> t;
    while (t--) // O(T)
    {
        int s, d;
        cin >> s >> d;
        bfs(s, d); // O(T*(V+E))
        // cout << level[d] << endl;
        // level.resize(level.size(), -1);
        // vis.resize(vis.size(), false);
        // fill(level.begin(), level.end(), -1);
        // fill(vis.begin(), vis.end(), false);
    }
    return 0;
}
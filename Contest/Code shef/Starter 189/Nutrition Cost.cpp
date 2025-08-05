#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int N, C;
        cin >> N >> C;
        vector<int> A(N), B(N);
        for (int i = 0; i < N; ++i)
            cin >> A[i];
        for (int i = 0; i < N; ++i)
            cin >> B[i];

        unordered_map<int, int> vitamin_min_cost;
        for (int i = 0; i < N; ++i)
        {
            if (vitamin_min_cost.find(A[i]) == vitamin_min_cost.end())
                vitamin_min_cost[A[i]] = B[i];
            else
                vitamin_min_cost[A[i]] = min(vitamin_min_cost[A[i]], B[i]);
        }

        vector<int> costs;
        for (auto &entry : vitamin_min_cost)
            costs.push_back(entry.second);

        sort(costs.begin(), costs.end());

        int max_value = 0;
        int sum_cost = 0;

        for (int i = 0; i < costs.size(); ++i)
        {
            sum_cost += costs[i];
            int vitamins = i + 1;
            max_value = max(max_value, C * vitamins - sum_cost);
        }

        cout << max_value << endl;
    }

    return 0;
}
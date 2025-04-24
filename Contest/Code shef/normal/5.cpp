#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll N, M;
        cin >> N >> M;

        ll totalEdges = N * (N - 1) / 2;
        ll zeroEdges = totalEdges - M;

        ll minWeight = max(0LL, (N - 1) - zeroEdges);
        ll maxWeight = min(N - 1, M);

        // Sum of integers from minWeight to maxWeight
        ll cnt = maxWeight - minWeight + 1;
        ll sum = (minWeight + maxWeight) * cnt / 2;

        cout << sum << '\n';
    }
    return 0;
}

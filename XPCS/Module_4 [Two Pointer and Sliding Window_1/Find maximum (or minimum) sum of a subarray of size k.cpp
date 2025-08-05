//https://www.geeksforgeeks.org/find-maximum-minimum-sum-subarray-size-k/
#include <bits/stdc++.h>
using namespace std;

int max_sum_subarray(vector<int>& arr,int arr_size,int k)
{
    int max_sum = 0;
    for (int i = 0; i + k <= arr_size;i++)
    {
        int count = 0;
        for (int j = i; j < i + k; j++)
        {
            count += arr[j];
        }
        max_sum = max(count, max_sum);
    }
    return max_sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int k = 4;
    int arr_size = arr.size();
    cout << arr_size << endl;
    int max_sum; 

    //by brute force
    max_sum = max_sum_subarray(arr, arr_size, k);
    cout << max_sum << endl;

    return 0;
}
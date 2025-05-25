//https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        int l=0,r=0;
        queue<int> q;
        vector<int> result; 
        while(r<arr.size())
        {
            if(arr[r]<0)
            {
                q.push(arr[r]);
            }
            
            if(r-l+1==k)
            {
                if(!q.empty())
                {
                    result.push_back(q.front());
                    if(arr[l]==q.front())
                    {
                        q.pop();
                    }
                }
                else
                {
                    result.push_back(0);
                }
                r++;
                l++;
            }
            else
            {
                r++;
            }
        }
        return result;
    }
};
// level: Medium
// brute force
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        int n = temperatures.size();
        vector<int> ans(n,0);
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(temperatures[j]>temperatures[i])
                {
                    ans[i]=j-i;
                    break;
                }
            }
        }
        return ans;
    }
};
// Time complexity: O(n*(n-1)) = O(n*n)
// space complexity: O(n)

// stack
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        int n = temperatures.size();
        vector<int> ans(n,0);
        stack<pair<int,int>> st;
        for(int i=0;i<n;i++)
        {
            int t = temperatures[i];
            while(!st.empty() && t> st.top().first)
            {
                auto p = st.top();
                st.pop();
                ans[p.second]=i-p.second;
            }
            st.push({t,i});
        }
        return ans;
    }
};
// time complexity: O(n)
// space complexity: O(n)




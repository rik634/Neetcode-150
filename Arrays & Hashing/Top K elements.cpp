// level: Medium
class Solution {
public:
    static bool myComp(const pair<int,int>& a, const pair<int,int> &b)
    {
        return a.second>b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> mp;
        int n = nums.size();
        for(auto it:nums)
        {
            mp[it]++;
        }
        vector<pair<int,int>> v;
        for(auto it:mp)
        {
            v.push_back({it.first,it.second});
        }
        sort(v.begin(),v.end(),myComp);
        vector<int> res;
        for(int i=0;i<k;i++)
        {
            res.push_back(v[i].first);
        }
        return res;
    }
};
// time complexity: O(n)+O(n) + O(nlogn)+O(k)= O(max(n,k)+nlogn)
// space complexity: O(n)+O(n)= o(n)

// optimal

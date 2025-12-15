// level: easy
// brute force:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if((nums[i]+nums[j])==target)
                {
                    return {i,j};
                }
            }
        }
        return {};
    }
};
// Time complexity: O(n*n)
// space complexity: O(1)

// optimal:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]=i;
        }
        for(int i=0;i<n;i++)
        {
            int a = target-nums[i];
            if(mp.find(a)!=mp.end() && i!=mp[a])
            {
                return {i,mp[a]};
            }
        }
        return {};
    }
};
// Time complexity: O(n)
// space complexity: O(n)

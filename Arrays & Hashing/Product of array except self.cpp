// level: Medium
class Solution {
public:
    const int MOD =1e9+7;
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> prefix(n,0);
        vector<int> suffix(n,0);
        prefix[0]=nums[0];
        suffix[n-1]=nums[n-1];
        for(int i=1,j=n-2; i<n && j>=0;i++,j--)
        {
            prefix[i]=(prefix[i-1]*nums[i]);
            suffix[j]=(suffix[j+1]*nums[j]);
        }
        vector<int> ans(n,0);
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                ans[i]=suffix[1];
            }
            else if(i==n-1)
            {
                ans[i]=prefix[n-2];
            }
            else
            {
                ans[i]=(prefix[i-1]*suffix[i+1]);
            }
        }
        return ans;
    }
};
// time complexity: O(n) + O(n)
// space complexity: O(3*n)

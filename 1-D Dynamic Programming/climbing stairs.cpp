// level: easy
// DP
class Solution {
public:
    int climbStairs(int n) {
        
        vector<int> dp(n+1,0);
        dp[0]=1;
        dp[1]=1;
        if(n<=1)
        {
            return dp[n];
        }
        for(int i=2;i<=n;i++)
        {
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};
// time complexity: O(n)
// space complexity: O(n)

// space optimized
class Solution {
public:
    int climbStairs(int n) {
        
        int prev1=1;
        int prev2=1;
        int curr;
        if(n<=1)
        {
            return 1;
        }
        for(int i=2;i<=n;i++)
        {
            curr = prev1+prev2;
            prev2=prev1;
            prev1=curr;
        }
        return curr;
    }
};// time complexity: O(n)
// space complexity: O(1)

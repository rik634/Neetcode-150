// level: easy
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();
        vector<int> dp(n+1,0);
        dp[0]=0;
        dp[1]=0;
        
        for(int i=2;i<=n;i++)
        {
            dp[i]=min(cost[i-1]+dp[i-1],cost[i-2]+dp[i-2]);
        }
        return dp[n];
    }
};
// time complexity: O(n)
// space complexity: O(n)

// space optimized
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();
        int prev1=0;
        int prev2=0;
        int curr;
        for(int i=2;i<=n;i++)
        {
            curr=min(cost[i-1]+prev2,cost[i-2]+prev1);
            prev1=prev2;
            prev2=curr;
        }
        return prev2;
    }
};
// time complexity: O(n)
// space complexity: O(1)

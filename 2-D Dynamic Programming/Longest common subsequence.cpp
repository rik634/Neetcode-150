// Level: Medium
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        
        int m = text1.length();
        int n = text2.length();
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(text1[i-1]==text2[j-1])
                {
                    dp[i][j]=1 + dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[m][n];
    }

};
// time complexity: O(m*n)
// space complexity: O(m*n)

// space optimized
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        
        int m = text1.length();
        int n = text2.length();
        
        vector<int> prev(n+1,0);
        for(int i=1;i<=m;i++)
        {
            vector<int> temp(n+1,0);
            for(int j=1;j<=n;j++)
            {
                if(text1[i-1]==text2[j-1])
                {
                    temp[j]=1 + prev[j-1];
                }
                else
                {
                    temp[j]=max(prev[j],temp[j-1]);
                }
            }
            prev=temp;
        }
        return prev[n];
    }

};
// Time complexity: O(m*n)
// space complexity: O(n)

// level: Medium
// using BFS
class Solution {
public:
    vector<int> dx={1,0};
    vector<int> dy={0,1};
    int uniquePaths(int m, int n) {
        
        int count=0;
        queue<pair<int,int>> q;
        q.push({0,0});
        while(!q.empty())
        {
            auto p = q.front();
            q.pop();
            int x = p.first;
            int y = p.second;
            if(x==m-1 && y==n-1)
            {
                count++;
            }
            for(int i=0;i<2;i++)
            {
                int r = x + dx[i];
                int c = y + dy[i];
                if(r>=0 && r<m && c>=0 && c<n)
                {
                    q.push({r,c});
                }
            }
        }
        return count;
    }
};
// Time complexity: O(m*n)
// space complexity: O(m*n)

// DP
class Solution {
public:
    vector<int> dx={1,0};
    vector<int> dy={0,1};
    int uniquePaths(int m, int n) {
        
        vector<vector<int>> dp(m,vector<int>(n,0));
        dp[0][0]=1;
        for(int i=1;i<m;i++)
        {
            dp[i][0]=1;
        }
        for(int i=1;i<n;i++)
        {
            dp[0][i]=1;
        }
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
    }
};
// Time complexity: O(m)+O(n) + O(m*n)
// space complexity: O(m*n)

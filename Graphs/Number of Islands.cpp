// Level: Medium
class Solution {
public:
    vector<int> dx={0,0,1,-1};
    vector<int> dy={1,-1,0,0};
    void dfs(int x, int y, vector<vector<char>>& grid, vector<vector<bool>>& dp)
    {
        dp[x][y]=true;
        for(int i=0;i<4;i++)
        {
            int r = x + dx[i];
            int c = y + dy[i];
            if(r>=0 && r<grid.size() && c>=0 && c<grid[0].size() && dp[r][c]==false && grid[r][c]=='1')
            {
                dfs(r,c,grid,dp);
            }
        }

    }
    int numIslands(vector<vector<char>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>> dp(m,vector<bool>(n,false));
        int count=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(dp[i][j]==false && grid[i][j]=='1')
                {
                    dfs(i,j,grid,dp);
                    count++;
                }
            }
        }
        return count;
    }
};
// Time complexity: O(m*n)
// Space complexity: O(m*n)

// can be solved with disjoint set as well

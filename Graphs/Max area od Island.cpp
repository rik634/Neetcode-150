// Level: Medium
class Solution {
public:
    vector<int> dx={0,0,1,-1};
    vector<int> dy={1,-1,0,0};
    int bfs(int x, int y, vector<vector<int>> & grid, vector<vector<bool>>& dp)
    {
        int count=0;
        queue<pair<int,int>> q;
        q.push({x,y});
        dp[x][y]=true;
        while(!q.empty())
        {
            auto p = q.front();
            q.pop();
            int r = p.first;
            int c = p.second;
            
            count++;
            for(int i=0;i<4;i++)
            {
                int a = r + dx[i];
                int b = c + dy[i];
                if(a>=0 && a<grid.size() && b>=0 && b<grid[0].size() && grid[a][b]==1 && dp[a][b]==false)
                {
                    dp[a][b]=true;
                    q.push({a,b});
                }
            }
        }
        return count;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>> dp(m,vector<bool>(n,false));
        int count=0;
        int mx=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1 && dp[i][j]==false)
                {
                    count=bfs(i,j,grid,dp);
                    mx=max(mx,count);
                }
            }
        }
        return mx;
    }
};
// Time complexity: O(m*n)
// space complexity: O(m*n)

// This can be solved with DFs and disjoint set with the same time  and space complexity as above

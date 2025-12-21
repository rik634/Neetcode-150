// level:Easy
// brute force
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int mx=0;
        int n = prices.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                mx=max(mx,prices[j]-prices[i]);
            }
        }
        return mx;
        
    }
};
// Time complexity: O(n*n)
// space complexity: O(1)

// optimized
// two pointers
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int mx=0;
        int n = prices.size();
        int l=0;
        int r=1;
        while(r<n)
        {
            if(prices[l]<prices[r])
            {
                mx=max(mx,prices[r]-prices[l]);
            }
            else
            {
                l=r;
            }
            r++;
        }
        return mx;

    }
};
// Time complexity: O(n)
// space complexity: O(1)

// DP
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int mn=prices[0];
        int n = prices.size();
        int p =0;
        for(auto it: prices){
            p=max(p,it-mn);
            mn=min(mn,it);
        }
        return p;

    }
};
// Time complexity: O(n)
// space complexity: O(1)


// level: Medium
// brute force
class Solution {
public:
    int maxArea(vector<int>& heights) {
        int res = 0;
        for (int i = 0; i < heights.size(); i++) {
            for (int j = i + 1; j < heights.size(); j++) {
                res = max(res, min(heights[i], heights[j]) * (j - i));
            }
        }
        return res;
    }
};
// time complexity: O(n*n)
// space complexity: O(1)

// two pointers// optimized
class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int mx=0;
        int n = height.size();
        int l=0;
        int r=n-1;
        while(l<=r)
        {
            int h = min(height[l],height[r]);
            int w = r-l;
            mx=max(mx,h*w);
            if(height[l]<=height[r])
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return mx;
    }
};
// time complexity: O(n)
//space complexity: O(1)

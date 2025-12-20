// leveL: medium
// binary search
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int n = numbers.size();
        
        for(int i=0;i<n;i++)
        {
            int t = target-numbers[i];
            int l=i+1;
            int r = n-1;
            while(l<=r)
            {
                int mid = l + (r-l)/2;
                if(numbers[mid]==t)
                {
                    return {i+1,mid+1};
                }
                else if(numbers[mid]<t)
                {
                    l=mid+1;
                }
                else
                {
                    r=mid-1;
                }
            }
        }
        return {};
    }
};
// time complexity: O(nlogn)
// space complexity: O(1)

// hashmap
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int n = numbers.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            int t = target-numbers[i];
            if(mp.find(t)==mp.end())
            {
                mp[numbers[i]]=i;
            }
            else{
                if((i+1)<(mp[t]+1))
                {
                    return {i+1,mp[t]+1};
                }
                return {mp[t]+1,i+1};
                
            }
        }
        return {};
    }
};
// time complexity: O(n)
// space complexity: O(n)

// two pointers
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int n = numbers.size();
        int l=0;
        int r=n-1;
        while(l<=r)
        {
            int sum = numbers[l]+numbers[r];
            if(sum==target)
            {
                return {l+1,r+1};
            }
            else if(sum<target)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return {};
    }
};
// time complexity: O(n)
// space complexity: O(1)

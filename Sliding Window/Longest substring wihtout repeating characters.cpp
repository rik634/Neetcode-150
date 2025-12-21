// level: Medium
// 2 pointers
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_set<char> str;
        int n=s.length();
        int l=0;
        int r=0;
        int len=0;
        for(int i=0;i<n;i++)
        {
            while(str.find(s[i])!=str.end())
            {
                str.erase(s[l]);
                l++;
            }
            str.insert(s[i]);
            len=max(len,i-l+1);
        }
        return len;
        
    }
};
// time complexity: O(n)
// space complexity: O(1)




// sliding window
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<char,int> mp; 
        int n=s.length();
        int l=0;
        int r=0;
        int len=0;
        while(r<n)
        {
            if(mp.find(s[r])==mp.end())
            {
                mp[s[r]]=r;
                
            }
            else
            {
                len=max(len,r-l);
                while(l<=(mp[s[r]]))
                {
                    mp.erase(s[l]);
                    l++;
                }
                
                mp[s[r]]=r;
                
            }
            r++;
            
        }
        len=max(len,r-l);
        return len;
    }
};
// time complexity: O(n)
// space complexity: O(1)

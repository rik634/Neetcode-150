// level: easy
class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length()!=t.length())
        {
            return false;
        }
        unordered_map<char,int> mp1;

        for(auto it:s)
        {
            mp1[it]++;
        }
        for(auto it:t)
        {
            mp1[it]--;
        }
        for(auto it:mp1)
        {
           if(it.second!=0)
           {
            return false;
           }
        }

        return true;
    }
};
// time complexity: O(2*n+n)
// space complexity: O(n)

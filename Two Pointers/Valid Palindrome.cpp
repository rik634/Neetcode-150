// leveL: easy
class Solution {
public:
    bool isPalindrome(string s) {
        
        
        string str="";
        for(int i=0;i<s.length();i++)
        {
            char ch=tolower(s[i]);
            if((ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
            {
               str+=ch;;
            }
            
        }
        int n = str.length();
        if(n<=1)
        {
            return true; 
        }
        for(int i=0;i<(n/2);i++)
        {
            if(str[i]!=str[n-i-1])
            {
                return false;
            }
        }
        return true;

    }
};
// time complexity: O(n) + O(n/2)
// space complexity: O(1)

// two pointers
class Solution {
public:
    bool isPalindrome(string s) {
        
        
        string str="";
        for(int i=0;i<s.length();i++)
        {
            char ch=tolower(s[i]);
            if((ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
            {
               str+=ch;;
            }
            
        }
        int n = str.length();
        if(n<=1)
        {
            return true; 
        }
        for(int i=0;i<(n/2);i++)
        {
            if(str[i]!=str[n-i-1])
            {
                return false;
            }
        }
        return true;

    }
};

// time complexity: O(n) + O(n)
// space complexity: O(1)

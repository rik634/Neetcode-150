// level: easy
class Solution {
public:
    bool isValid(string s) {
        
        int n = s.length();
        if(n==0)
        {
            return true;
        }
        stack<char> st;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.size()==0)
                {
                    return false;
                }
                char p = st.top();
                if((p=='(' && s[i]==')') || (p=='[' && s[i]==']') || (p=='{' && s[i]=='}'))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        } 
        return st.size()==0;
    }
};
// Time complexity: O(n)
// space complexity: O(n)

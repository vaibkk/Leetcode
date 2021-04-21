class Solution {
public:
    bool isValid(string s) {
        stack<char>paren;
        bool result=false;
        if(s.length()%2==1)
            return result;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
            {
                paren.push(s[i]);            
            }
           else
           {
                if(paren.empty())
                    return false;
                char c=paren.top();
                if((c=='(' && s[i]==')')||(c=='['&& s[i]==']')||(c=='{' && s[i]=='}'))
                    paren.pop();
            }
        }
        if(paren.empty())
        {
            result=true;
        }
        return result;
    }
};
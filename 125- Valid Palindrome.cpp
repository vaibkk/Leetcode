class Solution {
public:
    bool isPalindrome(string s) 
    {
        bool result=true;
        vector<char>c;
        vector<char>rev;
        if(s.length()==0)
            result=true;
        for (int i=0;i<s.length(); i++)
	    {
	        if (isalnum(s[i]))		
            {
			    s[i]=tolower(s[i]);	
            }
            if(!isalnum(s[i]))
                s[i]=' ';
            if(s[i]!=' ')
            {
                c.push_back(s[i]);
                rev.push_back(s[i]);
            }
	    }
        reverse(rev.begin(),rev.end());
        for(int i=0;i<rev.size();i++)
        {
            if(c[i]!=rev[i])
            {
                result=false;
                break;
            }
            else
                result=true;
        }
        return result;            
    }
};
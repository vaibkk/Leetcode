class Solution {
public:
    int firstUniqChar(string s) {
        map <char,int> elements;
        int result=-1;
        for(int i:s)
        {
                 elements[i]=elements[i]+1;
        }
        for(int i=0;i<s.length();i++)
        {
            if(elements[s[i]]==1)
            {
                result=i;
                break;
            }
        }
            
        return result;
    }
};
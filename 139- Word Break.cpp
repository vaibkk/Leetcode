class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) 
    {
        if(wordDict.size()==0)
            return false;
        unordered_set<string>dict(wordDict.begin(),wordDict.end());
        vector<bool>dp(s.size()+1,false);
        dp[0]=true;
        for(int i=0;i<=s.size();i++)
        {
            for(int j=0;j<i;j++)
            {

                if(dict.count(s.substr(j,i-j)) && dp[j])
                {
                    dp[i]=true;
                    break;
                }
            }
        }
        
        return dp.back();
        
    }
};
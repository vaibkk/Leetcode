class Solution {
public:
    int lengthOfLIS(vector<int>& nums) 
    {
        if(nums.size()==0)
            return 0;
        int n=nums.size();
        int dp[n];
        dp[0]=1;
        for(int i=1;i<n;i++)
        {
            int maxval=0;
            for(int j=0;j<i;j++)
            {
                if(nums[i]>nums[j])
                {
                    maxval=max(maxval,dp[j]);
                }
            }
            dp[i]=maxval+1;
        }
        return *max_element(dp , dp + n);
        
    }
};
class Solution {
public:
    int rob(vector<int>& nums) 
    {
        if(nums.size()==0)
            return 0;
         if(nums.size()==1)
             return nums[0];
        if(nums.size()==2)
            return max(nums[0],nums[1]);
        int n=nums.size();
        vector<int>dp1(n-1);
        vector<int>dp2(n);
        dp1[0]=nums[0];
        dp1[1]=max(nums[0],nums[1]);
        for(int i=2;i<=n-2;i++)
        {
            dp1[i]=max(dp1[i-2]+nums[i],dp1[i-1]);
        }
        dp2[1]=nums[1];
        dp2[2]=max(nums[2],nums[1]);
        for(int i=3;i<=n-1;i++)
        {
            dp2[i]=max(dp2[i-2]+nums[i],dp2[i-1]);
        }
        return max(dp1[n-2],dp2[n-1]);
    }
};
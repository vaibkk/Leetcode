class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {   
      int r=nums.size();
      int overallsum=nums[0];
      int newsum=nums[0];
      for(int i=1;i<r;i++)
      {
        newsum=max(nums[i],newsum+nums[i]);
        overallsum=max(overallsum,newsum);
      } 
      return overallsum;
    }
};
class Solution {
public:
    void sortColors(vector<int>& nums) {
       int number=nums.size();
       int count0=0;
      int count1=0;
      int count2=0;
    	for(int i=0;i<number;i++)
    	{
          if(nums[i]==0)
            count0++;
          if(nums[i]==1)
            count1++;
          if(nums[i]==2)
            count2++;
    	} 
      for(int i=0;i<count0;i++)
      {
        nums[i]=0;
      }
      for(int i=count0;i<count1+count0;i++)
      {
        nums[i]=1;
      }
      for(int i=count1+count0;i<count1+count0+count2;i++)
      {
        nums[i]=2;
      }
        
    }
};
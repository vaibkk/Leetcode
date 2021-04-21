class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int number=nums.size();
    	int data=0;
    	for(int i=0;i<number;i++)
    	{
          data^=nums[i];
    	} 
    	return data;
    }
};
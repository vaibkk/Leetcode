class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map<int,int>sum;
        vector<int> result;
    
        for(int i=0;i<nums.size();i++)
        {
            int rem=target-nums[i];
                if(sum.count(rem))
                {
                    
                    result.push_back(sum[rem]);
                    result.push_back(i);
                    break;
                }
                else
                {
                    sum[nums[i]]=i;
                }
            
        }
        return result;
    }
};
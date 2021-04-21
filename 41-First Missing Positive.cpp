class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int>result;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                result.insert(nums[i]);
            }
        }
        int k=1;
        for(auto x:result)
        {
            if (x!=k)
                break;
            k++;
        }
        return k;
    }
};
class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int left=0;
        int right=nums.size()-1;
        if(nums.size()==0)
            return -1;
        while(left<right)
        {
            int mid=(left+right)/2;
            if(nums[mid]>nums[right])
                left=mid+1;
            else
                right=mid;
        }
        int pivot=left;
        left=0;
        right=nums.size()-1;
        if(nums[pivot]<=target && target<=nums[right])
            left=pivot;
        else
            right=pivot;
        while(left<=right)
        {
            int mid=(right+left)/2;
            if(nums[mid]==target)
                return mid;
            if(nums[mid]<target)
                left=mid+1;
            else
                right=mid-1;
        }
        return -1;
        
    }
};
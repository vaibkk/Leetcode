class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0;
        for(int i=0;i<nums1.size();i++)
        {
            if(nums1[i]==0)
            {  nums1[i]=nums2[j];
                j++;
            }
            if(j==nums2.size())
                break;
        }
        sort(nums1.begin(),nums1.end());
        
    }
};
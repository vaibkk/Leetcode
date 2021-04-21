class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double result=0;
        for(int i=0;i<nums1.size();i++)
        {
            nums2.push_back(nums1[i]);
        }
        sort(nums2.begin(),nums2.end());
        if(nums2.size()%2==1)
        {
            int mid1=nums2.size()/2;
            result=nums2[mid1];
        }
        if(nums2.size()%2==0)
        {
            double mid1=nums2.size()/2;
            double val1=nums2[mid1];
            double val2=nums2[mid1-1];
            result=(val1+val2)/2;
        }
        return result;
    }
};
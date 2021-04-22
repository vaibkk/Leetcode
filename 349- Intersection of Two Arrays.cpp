class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_set<int>visited;
        vector<int>res;
        for(int n:nums1)
        {
            visited.insert(n);
        }
        for(int n:nums2)
        {
            if(visited.count(n))
            {
                res.push_back(n);
                visited.erase(n);
            }
        }
        return res;
        
    }
};
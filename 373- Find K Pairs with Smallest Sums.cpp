class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) 
    {
      priority_queue<pair<int,vector<int>> > pq;
         
        vector<vector<int>>answer;
      for(int n1:nums1)
      {
          for(int n2:nums2)
          {
              int sum=n1+n2;
              if(pq.size()<k)
                   pq.push({sum, vector<int>({n1,n2})});
              else if(sum<pq.top().first)
              {
                  pq.pop();
                  pq.push({sum,vector<int>({n1,n2})});
              }
          }
      }
      while(!pq.empty())
      {
          answer.push_back(pq.top().second);
          pq.pop();
      }
        return answer;
    }
};
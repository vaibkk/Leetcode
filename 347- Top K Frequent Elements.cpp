class Solution {
public:
     vector<int> topKFrequent(vector<int>& nums, int k) 
     {
       vector<int> ans; 
       unordered_map<int,int> count;   
       priority_queue<pair<int,int>>pq; 
     
       for(int x : nums)
       {
           count[x]=count[x]+1;
       }
       for(auto p :count) 
       {
           pq.push({p.second,p.first});
       } 
       while(k--)
       {
           ans.push_back(pq.top().second);
           pq.pop();
       }    
       return ans;
    }
};
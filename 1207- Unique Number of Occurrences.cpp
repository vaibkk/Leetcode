class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        bool result=false;
        map<int,int>occur;
        set<int>count;
        for(int i : arr)
        {
            occur[i]=occur[i]+1;
        }
        int i=0;
       for (auto itr = occur.begin(); itr != occur.end(); ++itr) { 
            count.insert(itr->second);
         
       }
        if(occur.size()==count.size())
            result=true;
        
        return result;
    }
};
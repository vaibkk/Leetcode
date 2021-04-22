class Solution {
public:
    string frequencySort(string s) 
    {
        unordered_map<char,int>value;
        priority_queue<pair<int, char>>pt;
        string result={};
        int n=s.length();
        int len=0;
        for(int i:s)
        {
            value[i]=value[i]+1;
        }
        for(auto itr=value.begin();itr!=value.end();itr++)
        {
            pt.push({itr->second,itr->first});
        }
        while (!empty(pt)) 
        {
		int val = pt.top().first;
		while (val) 
        {
			result += pt.top().second;
			val--;
		}
		pt.pop();
	}

        return result;
    }
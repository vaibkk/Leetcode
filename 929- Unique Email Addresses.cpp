class Solution {
public:
    int numUniqueEmails(vector<string>& emails) 
    {
        unordered_set<string>visited;
        for(auto str:emails)
        {
            string temp="";
            int pos=str.find("@");
            string sub=str.substr(pos);
            for(char x:str)
            {
                if(x=='.')
                    continue;
                if(x=='+'||x=='@')
                    break;
                else
                    temp.push_back(x);            
            }
            temp+=sub;
            visited.insert(temp);
        }
        return visited.size();
    }
};
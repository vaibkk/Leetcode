class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        map<int,string>final;
        final.insert({3,"Fizz"});
        final.insert({5,"Buzz"});
        vector<string>answer;
        for(int i=1;i<=n;i++)
        {
            string temp="";
            for(auto& j : final)
            {
                
                if(i % j.first == 0)
                {
                    temp  += j.second;
                }
            
            }
            if(temp != "")
            {
                answer.push_back(temp);
            }else
            {
                answer.push_back( to_string(i));
            }
        }
        return answer;
    }
};
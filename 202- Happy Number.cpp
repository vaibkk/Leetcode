class Solution {
public:
    bool isHappy(int n) 
    {
        set<int>value;
        while(n!=1)
        {
            int rem=number(n);
            if(value.count(rem))
                return false;
            n=rem;
            value.insert(rem);
        }
        return true;
    }
    int number(int n)
    {
        int r=0;
        while(n>0)
        {
            int rem=n%10;
            r+=rem*rem;
            n=n/10;
        }
        return r;
    }
};
class Solution {
public:
    bool isPalindrome(int x) {
        bool result=true;
        if(x<0||x%10==0 && x!=0)
            result= false;
        int rev=0;
        int temp=x;
        
        if(x>0)
        {
        while (x != 0 && x>=0) {
            int pop = x % 10;
            x /= 10;
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
            rev = rev * 10 + pop;
        }
        if(rev==temp)
            result=true;
        else
            result=false;
        }
        return result;
    }
};
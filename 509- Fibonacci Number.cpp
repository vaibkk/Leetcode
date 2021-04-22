class Solution {
public:
    int fib(int N) {
        if (N==0)
            return 0;
        int fibresult[N+1];
        fibresult[0]=0;
        fibresult[1]=1;
        for(int i=2;i<=N;i++)
        {
            fibresult[i]=fibresult[i-1]+fibresult[i-2];
        }     
        return fibresult[N];  
    }
};
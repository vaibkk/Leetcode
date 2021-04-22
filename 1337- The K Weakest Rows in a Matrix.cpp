class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int num=mat.size();
        vector<int>sum(num);
        vector<int>row(k);

        for(int i=0;i<num;i++)
        {   
            sum[i]=0;  
        	for(int j=0;j<mat[0].size();j++)
        	{
        		sum[i]=sum[i]+mat[i][j];
        	}
        }

        int j=0;
        while(j<k)
        {   
            int minpos=0 ;
        	for(int i=0;i<sum.size();i++)
        	{
        		if(sum[i]<sum[minpos])
        	    {
        	    	minpos=i;
        	    	row[j]=minpos;
        	    }        	     
        	}
        	
            sum[minpos]=INT_MAX;
            j++;
        }
        return row;
    }
};
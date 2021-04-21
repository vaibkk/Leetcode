class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
    	int r=matrix.size();
    	int c=matrix[0].size();
        vector <bool> row(r);
        vector <bool> column(c);
    	for(int i=0;i<r;i++)
    	{
    		for(int j=0;j<c;j++)
    		{
    			if(matrix[i][j]==0)
    			{
    				row[i]=true;
    				column[j]=true;
    			}
    		}
    	} 
    	for(int i=0;i<r;i++)
    	{
    		for(int j=0;j<c;j++)
    		{
    			if(row[i]==true ||column[j]==true)
    			{
    				matrix[i][j]=0;    			
                }
    		}
    	}
 
    }
};
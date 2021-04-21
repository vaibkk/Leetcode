class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>result;
        if(matrix.size()==0)
            return result;
        int top=0;
        int bottom=matrix.size()-1;
        int right=matrix[0].size()-1;
        int left=0;
        int matsize=matrix.size()*matrix[0].size();
       
    
        while(result.size()<matsize)
        {
            for(int i=left;i<=right && result.size()<matsize;i++)
            {
                result.push_back(matrix[top][i]);  
            }
            top++;
            
            for(int i=top;i<=bottom && result.size()<matsize ;i++)
            {
                result.push_back(matrix[i][right]);
            }
            right--;
            
            for(int i=right;i>=left  && result.size()<matsize ;i--)
            {
                result.push_back(matrix[bottom][i]);
            }
            bottom--;
            
            for(int i=bottom;i>=top  && result.size()<matsize ;i--)
            {
                result.push_back(matrix[i][left]);
            }
            left++;
        }
        return result;
        
    }
};
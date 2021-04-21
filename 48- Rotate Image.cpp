class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int temp=0;
        for(int i=0;i<row;i++)
        {
            for(int j=i;j<row;j++)
            {
                temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<row/2;j++)
            {
                temp=matrix[i][j];
                matrix[i][j]=matrix[i][row-j-1];
                matrix[i][row-j-1]=temp;
            }
        }
        
    }
};
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int row=A.size();
        int col=A[0].size();
        int temp=0;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<row/2;j++)
            {
                temp=A[i][j];
                A[i][j]=A[i][row-j-1];
                A[i][row-j-1]=temp;
            }
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                A[i][j]=A[i][j]^1;
            }
        }
        return A;
        
    }
};
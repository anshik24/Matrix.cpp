class Solution
{
    public:
        int maxOnes (vector <vector <int>> &Mat, int N, int M)
        {
            // your code here
            int row=0;
            int col=M-1;
            for(int i=0;i<N;i++){
                for(int j=col;j>=0;j--){
                    if(Mat[i][j]==1){
                        row=i;
                        col--;
                    }
                    else
                    break;
                }
            }
            return row;
        }
};

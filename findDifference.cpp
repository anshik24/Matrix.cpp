class Solution {
  public:
    int diagonalSumDifference(int N, vector<vector<int>> Grid) {
        // code here
        int sum=0,sum1=0;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(i==j){
                    sum = sum+Grid[i][j];
                }
                if(i+j==N-1){
                    sum1 =sum1+ Grid[i][j];
                }
            }
        }
        return abs(sum-sum1);
    }
};


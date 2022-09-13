class Solution {
  public:
    int areMatricesIdentical(int N, vector<vector<int>> Grid1,
                             vector<vector<int>> Grid2) {
        
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(Grid1[i][j]!=Grid2[i][j])
                return false;
            }
        }
        return true;;
        
    }
};

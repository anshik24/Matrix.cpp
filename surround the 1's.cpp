//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int Count(vector<vector<int> >& matrix) {
        // Code here
        int delx[8] = {0, 1, 0, -1, 1, -1, -1, 1};
        int dely[8] = {1, 0, -1, 0, 1, -1, 1, -1};
        int n = matrix.size(), m = matrix[0].size(), c = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j])
                {
                    int count = 0;
                    for (int k = 0; k < 8; k++)
                    {
                        int  x = i + delx[k], y = j + dely[k];
                        count += (x >= 0 && x < n && y >= 0 && y < m && !matrix[x][y]);
                    }
                    c += (count > 0 && count % 2 == 0);
                }
            }
        }
        return c;
    
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends

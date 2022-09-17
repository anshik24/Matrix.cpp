class Solution{
public:
	int countZeros(vector<vector<int>>A)
	{
	    int count =0;
		for(int i=0;i<A.size();i++){
		    for(int j=0;j<A.size();j++){
		        
		        if(A[i][j]==0)
		        count++;
		    }
		}
		return count;
		
		
		
		
		
	}
};

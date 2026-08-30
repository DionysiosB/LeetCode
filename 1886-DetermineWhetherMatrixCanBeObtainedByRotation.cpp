class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {

        bool a(true), b(true), c(true), d(true);
	    const int n = mat.size();
	    for(int row = 0; row < n; row++){
		    for(int col = 0; col < n; col++){
			    if(mat[row][col]!=target[row][col]){a = false;}
		    	if(mat[row][col]!=target[n-col-1][row]){b = false;}
			    if(mat[row][col]!=target[n-row-1][n-col-1]){c = false;}
			    if(mat[row][col]!=target[col][n-row-1]){d = false;}
		    }
	    }
	
        return a || b || c || d;
    }
};

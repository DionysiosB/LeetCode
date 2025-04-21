class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        
        int mxd(0), mxa(0);
        for(int p = 0; p < dimensions.size(); p++){
            int x = dimensions[p][0];
            int y = dimensions[p][1];
            
            int diag = x * x + y * y;
            int area = x * y;
            
            if(diag > mxd){mxd = diag; mxa = area;}
            else if(diag == mxd){mxa = (mxa > area ? mxa : area);}
        }
        
        return mxa;
    }
};

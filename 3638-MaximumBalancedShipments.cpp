class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        int mxw(0), cnt(0);
        for(int w : weight){
            if(w >= mxw){mxw = w;}
            else{++cnt; mxw = 0;}
        }

        return cnt;
    }
};

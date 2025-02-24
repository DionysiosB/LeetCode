class Solution {
public:
    int fixedPoint(vector<int>& arr) {
        for(int p = 0; p < arr.size(); p++){
            if(arr[p] == p){return p;}
        }
        
        return -1;
        
    }
};

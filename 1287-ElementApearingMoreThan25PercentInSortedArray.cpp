class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n(arr.size());
        int cnt(1);
        for(int p = 1; p < arr.size(); p++){
            if(arr[p] == arr[p - 1]){++cnt;}
            else{cnt = 1;}
            if(4 * cnt > n){return arr[p];}
        }

        return arr[0];
    }
};

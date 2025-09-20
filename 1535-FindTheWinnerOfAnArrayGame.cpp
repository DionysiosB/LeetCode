class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        if(k == 1){return arr[0] > arr[1] ? arr[0] : arr[1];}
        long idx(0), cnt(0);
        for(int p = 1; p < arr.size(); p++){
            if(arr[idx] > arr[p]){
                ++cnt;
                if(cnt >= k){return arr[idx];}
            }
            else{idx = p; cnt = 1;}
        }

        return arr[idx];
    }
};

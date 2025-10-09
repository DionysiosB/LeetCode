class Solution {
public:
    int longestMountain(vector<int>& arr) {
        std::vector<int> vr(arr.size()); vr.back() = 0;
        for(int p = vr.size() - 2; p >= 0; p--){
            if(arr[p] > arr[p + 1]){vr[p] = 1 + vr[p + 1];}
            else{vr[p] = 0;}
        }
        int prev(0), mxlen(0);
        for(int p = 1; p + 1 < arr.size(); p++){
            if(arr[p - 1] < arr[p]){
                ++prev;
                if(vr[p] > 0){
                    int len = prev + 1 + vr[p];
                    mxlen = (len > mxlen ? len : mxlen);
                }
            }
            else{prev = 0;}
        }

        return mxlen;
        
    }
};

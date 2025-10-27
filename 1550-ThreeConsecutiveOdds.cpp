class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        for(int p = 2; p < arr.size(); p++){
            if(arr[p] % 2 && arr[p - 1] % 2 && arr[p - 2] % 2){return true;}
        }
        return false;
    }
}

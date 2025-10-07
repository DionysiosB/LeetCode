class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int d = arr[1] - arr[0];
        for(int p = 2; p < arr.size(); p++){
            int diff = arr[p] - arr[p - 1];
            if(diff != d){return false;}
        }

        return true;
    }
};

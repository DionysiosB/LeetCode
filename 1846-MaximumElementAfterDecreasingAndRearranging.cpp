class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        arr[0] = 1;
        for(int p = 1; p < arr.size(); p++){arr[p] = arr[p - 1] + (arr[p] > arr[p - 1]);}
        return arr.back();
    }
};

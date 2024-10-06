class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum(0);
        const int n = arr.size();
        for(int p = 0; p < n; p++){
            int mult = ((p + 1) * (n - p) + 1) / 2;
            sum += mult * arr[p];
        }

        return sum;
    }
}

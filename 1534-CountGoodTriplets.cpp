class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int n = arr.size();
        int cnt = 0;
        for (int p = 0; p < n; p++){
            for (int q = p + 1; q < n; q++){
                for (int r = q + 1; r < n; r++){
                    cnt += (std::abs(arr[p] - arr[q]) <= a && std::abs(arr[q] - arr[r]) <= b && std::abs(arr[r] - arr[p]) <= c);
                }
            }
        }
        
        return cnt;
    }
};


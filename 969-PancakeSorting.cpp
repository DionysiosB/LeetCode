class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        int n = arr.size();
        std::vector<int> b(arr);
        sort(b.rbegin(), b.rend());

        std::vector<int> res;
        for(int p = 0; p < n; p++){
            int idx(-1);
            for(int u = 0; idx < 0 && u < n; u++){if(arr[u] == b[p]){idx = u;}}
            res.push_back(idx + 1);   std::reverse(arr.begin(), arr.begin() + idx + 1);
            res.push_back(n - p); std::reverse(arr.begin(), arr.begin() + n - p);
        }

        return res;
    }
};

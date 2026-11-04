class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {

        const int n = arr.size();
        sort(arr.begin(), arr.end());
        int m = arr[(n - 1) / 2];

        std::vector<int> v;
        int left(0), right(n - 1);
        while(v.size() < k && left <= right){
            int sr = arr[right] - m;
            int sl = m - arr[left];
            if(sr >= sl){v.push_back(arr[right--]);}
            else{v.push_back(arr[left++]);}
        }

        return v;
    }
};

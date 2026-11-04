class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {

        std::vector<int> w(k);
        for(int x : arr){++w[(k + x % k) % k];}
        for(int p = 1; p < k - p; p++){
            if(w[p] != w[k - p]){return false;}
        }

        if(k % 2 == 0 && w[k / 2] % 2){return false;}
        return true;
    }
};

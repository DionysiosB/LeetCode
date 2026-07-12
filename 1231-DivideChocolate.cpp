class Solution {
public:

    bool check(const std::vector<int> &sv, int k, int ms){
        int cs(0), cnt(0);
        for(size_t p = 0; p < sv.size() && cnt <= k; p++){
            cs += sv[p];
            if(cs >= ms){++cnt; cs = 0;}
        }

        return (cnt > k);
    }

    int maximizeSweetness(vector<int>& sweetness, int k) {

        int ans(1), left(1), right(1e9 + 7);
        while(left <= right){
            int mid = (left + right) / 2;
            if(check(sweetness, k, mid)){ans = mid; left = mid + 1;}
            else{right = mid - 1;}
        }

        return ans;
    }
};

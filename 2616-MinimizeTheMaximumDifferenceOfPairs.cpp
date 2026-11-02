class Solution {
public:

    bool check(const std::vector<int> &v, int k, int target){
        bool prev(true);
        for(int p = 1; p < v.size(); p++){
            if(!prev){prev = true; continue;}
            if(v[p] - v[p - 1] > target){continue;}
            prev = false;
            --k; if(!k){return true;}
        }

        return false;
    }

    int minimizeMax(vector<int>& nums, int p) {

        if(!p){return 0;}
        sort(nums.begin(), nums.end());
        int left(0), right(nums.back()), ans(nums.back());
        while(left <= right){
            int mid = (left + right) / 2;
            if(check(nums, p, mid)){ans = mid; right = mid - 1;}
            else{left = mid + 1;}
        }

        return ans;
    }
};

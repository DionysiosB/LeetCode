class Solution {
public:

    bool check(const std::vector<int> &v, int mxn, long long target){
        long long cnt(0);
        for(int num : v){
            cnt += (num - 1) / mxn;
            if(cnt > target){return false;}
        }
        return true;
    }

    int minimumSize(vector<int>& nums, int maxOperations) {
        
        int left(1), right(1e9), res(1e9);
        while(left <= right){
            int mid = (left + right) / 2;
            if(check(nums, mid, maxOperations)){res = mid; right = mid - 1;}
            else{left = mid + 1;}
        }

        return res;
    }
};

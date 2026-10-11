class Solution {
public:
    bool canMakeEqual(vector<int>& nums, int k) {

        for(int target = -1; target <= 1; target += 2){
            int cnt(0);
            std::vector<int> v(nums);
            for(int p = 0; cnt <= k && p + 1 < v.size(); p++){
                if(v[p] == target){continue;}
                else{v[p + 1] = -v[p + 1]; ++cnt;}
            }

            if(v.back() != target){continue;}
            if(cnt <= k){return true;}
        }

        return false;
    }
};

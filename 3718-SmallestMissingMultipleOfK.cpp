class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        std::vector<bool> v(107, 0);
        for(int x : nums){
            if(x % k){continue;}
            v[x / k] = 1;
        }

        for(int p = 1; p < v.size(); p++){
            if(!v[p]){return p * k;}
        }

        return 0;
    }
};

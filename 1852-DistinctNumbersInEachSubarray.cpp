class Solution {
public:
    vector<int> distinctNumbers(vector<int>& nums, int k) {

        std::map<int, int> m;
        std::vector<int> v;
        for(int p = 0; p < nums.size(); p++){
            ++m[nums[p]];
            if(p >= k - 1){
                if(p >= k){
                    int prev = nums[p - k];
                    if(m[prev] == 1){m.erase(prev);}
                    else{--m[prev];}
                }
                v.push_back(m.size());
            }
        }

        return v;
    }
};

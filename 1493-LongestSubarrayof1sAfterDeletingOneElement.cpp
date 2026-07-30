class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        std::vector<int> v;
        int z(0), a(0); bool zs(0);
        for(int p = 0; p < nums.size(); p++){
            if(nums[p]){
                if(z && !v.empty()){v.push_back(z);}
                ++a; z = 0;
            }
            else{
                if(a){v.push_back(a);}
                ++z; zs = true; a = 0;
            }
        }

        if(a){v.push_back(a);}

        if(v.empty()){return 0;}
        else if(v.size() == 1){return v[0] + zs - 1;}

        int res(v.back());
        for(int p = 1; p < v.size(); p += 2){
            res = std::max(res, v[p - 1]);
            if(v[p] == 1){res = std::max(res, v[p - 1] + v[p + 1]);}
        }
        return res;


        
    }
};

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        std::vector<bool> w(107, 0);
        for(int p = 0; p < nums.size(); p++){w[nums[p]] = 1;}

        for(int p = 0; p < w.size(); p++){
            if(w[p]){break;}
            w[p] = 1;
        }
        
        for(int p = w.size() - 1; p >= 0; p--){
            if(w[p]){break;}
            w[p] = 1;
        }

        std::vector<int> v;
        for(int p = 0; p < w.size(); p++){
            if(w[p]){continue;}
            v.push_back(p);
        }

        return v;
    }
};

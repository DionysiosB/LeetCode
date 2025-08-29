class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int a(-1e9-7), b(-1e9-8), cntA(0), cntB(0);
        for(int p = 0; p < nums.size(); p++){
            int x = nums[p];
            if(x == a){++cntA;}
            else if(x == b){++cntB;}
            else if(cntA == 0){a = x; cntA = 1;}
            else if(cntB == 0){b = x; cntB = 1;}
            else{--cntA; --cntB;}
        }

        int tstA(0), tstB(0);
        for(int p = 0; p < nums.size(); p++){tstA += (nums[p] == a); tstB += (nums[p] == b);}
        std::vector<int> res;
        if(tstA > nums.size() / 3){res.push_back(a);}
        if(tstB > nums.size() / 3){res.push_back(b);}
        return res;
    }
};

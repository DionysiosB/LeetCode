class Solution {
public:
    vector<int> sortByReflection(vector<int>& nums) {

        std::sort(nums.begin(), nums.end(),
            [](int a, int b) {
                std::vector<bool> va, vb;
                int xa(a); while(xa){va.push_back(xa % 2); xa /= 2;}
                int xb(b); while(xb){vb.push_back(xb % 2); xb /= 2;}
                int ra(0); for(int p = 0; p < va.size(); p++){ra = 2 * ra + va[p];}
                int rb(0); for(int p = 0; p < vb.size(); p++){rb = 2 * rb + vb[p];}
                if(ra != rb){return ra < rb;}
                else{return a < b;}
            });

            return nums;
    }
};

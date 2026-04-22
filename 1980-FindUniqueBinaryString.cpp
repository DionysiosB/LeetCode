class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {

        std::set<int> vs;
        for(int p = 0; p < nums.size(); p++){
            std::string s = nums[p];
            long x(0);
            for(long q = 0; q < s.size(); q++){x = 2 * x + (s[q] - '0');}
            vs.insert(x);
        }

        int x(0);
        while(vs.count(x)){++x;}
        std::string res(nums[0].size(), '0');
        for(int p = 0; p < res.size(); p++){
            if(x % 2){res[p] = '1';}
            x /= 2;
        }
        std::reverse(res.begin(), res.end());
        return res;
    }
};

class Solution {
private:
    bool almostEqual(int x, int y){

        std::string s1(std::to_string(x)), s2(std::to_string(y));
        while(s1.size() < s2.size()){s1 = "0" + s1;}
        while(s2.size() < s1.size()){s2 = "0" + s2;}
        
        int diff = 0;
        std::unordered_map<char,int> mp1, mp2;
        for(int p = 0; p < s1.size(); p++){
            diff += (s1[p] != s2[p]);
            mp1[s1[p]]++; mp2[s2[p]]++;
        }

        return diff <= 2 && mp1 == mp2;
    }


public:
    int countPairs(vector<int>& nums) {
        
        int cnt = 0;
        for(int p = 0; p < nums.size(); p++){
            for(int q = p + 1; q < nums.size(); q++){
                cnt += almostEqual(nums[p], nums[q]);
            }
        }
        return cnt;
    }
};

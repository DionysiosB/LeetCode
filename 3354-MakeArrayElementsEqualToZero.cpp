class Solution {
public:
    int countValidSelections(vector<int>& nums) {

        int cnt(0), lcs(0);
        int rcs(0); for(int num : nums){rcs += num;}

        for(int num : nums){
            if(!num){
                if(lcs == rcs){cnt += 2;}
                else if(std::abs(lcs - rcs) == 1){++cnt;}
            }
            lcs += num;
            rcs -= num;
        }

        return cnt;
    }
};

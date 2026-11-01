class Solution {
public:
    int longestBalanced(vector<int>& nums) {

        int mxlen(0);
        for(int p = 0; p < nums.size(); p++){
            std::unordered_set<int> evens, odds;
            for(int q = p; q < nums.size(); q++){
                if(nums[q] % 2){odds.insert(nums[q]);}
                else{evens.insert(nums[q]);}
                if(odds.size() == evens.size()){
                    int len = q - p + 1;
                    mxlen = (mxlen > len ? mxlen : len);
                }
            }
        }

        return mxlen;
        
    }
};

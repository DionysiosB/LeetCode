class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        std::map<int, int> m; m[0] = -1;
        int s(0), mxlen(0);
        for(int p = 0; p < nums.size(); p++){
            s += 2 * nums[p] - 1;
            if(m.count(s)){
                int len = p - m[s];
                mxlen = (len > mxlen ? len : mxlen);
            }
            else{m[s] = p;}
        }
        return mxlen;
    }
};

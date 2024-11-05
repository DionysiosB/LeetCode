class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        std::map<int, std::pair<int, int> > ms;
        int mxf(0), mxlen(0);
        for(int p = 0; p < nums.size(); p++){
            if(ms.count(nums[p])){
                ++ms[nums[p]].second;
                if(mxf < ms[nums[p]].second){
                    mxf = ms[nums[p]].second;
                    mxlen = p - ms[nums[p]].first + 1;
                }
                else if(mxf == ms[nums[p]].second){
                    int curlen = p - ms[nums[p]].first + 1;
                    mxlen = (mxlen < curlen ? mxlen : curlen);
                }
            }
            else{
                ms[nums[p]] = std::make_pair(p, 1);
                mxf = (mxf > 1 ? mxf : 1);
                mxlen = (mxlen > 1 ? mxlen : 1);
            }
        }

        return mxlen;
    }
};

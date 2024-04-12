class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        std::map<int, int> w;
        for(int p = 0; p < nums2.size(); p++){w[nums2[p]] = p;}

        std::stack<std::pair<int, int> > s;
        std::vector<int> ngv(nums2.size(), -1);
        for(long p = 0; p < nums2.size(); p++){
            while(!s.empty() && s.top().first < nums2[p]){
                ngv[s.top().second] = nums2[p];
                s.pop();
            }
            s.push(std::make_pair(nums2[p], p));
        }

        std::vector<int> res(nums1.size());
        for(int p = 0; p < nums1.size(); p++){res[p] = ngv[w[nums1[p]]];}
        return res;
    }
};

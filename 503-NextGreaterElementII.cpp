class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        const int n = nums.size();
        std::vector<int> stv, w(n, -1);
        for(size_t p = 0; p < 2 * nums.size(); p++){
            int pos = p % n;
            while(!stv.empty() && nums[stv.back()] < nums[pos]){
                w[stv.back()] = nums[pos];
                stv.pop_back();
            }

            stv.push_back(pos);
        }

        return w;
    }
};

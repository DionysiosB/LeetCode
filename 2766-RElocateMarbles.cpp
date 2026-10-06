class Solution {
public:
    vector<int> relocateMarbles(vector<int>& nums, vector<int>& moveFrom, vector<int>& moveTo) {

        std::unordered_set<int> us;
        for(int p = 0; p < nums.size(); p++){us.insert(nums[p]);}
        for(int p = 0; p < moveFrom.size(); p++){
            us.erase(moveFrom[p]);
            us.insert(moveTo[p]);
        }

        std::vector<int> v;
        for(std::unordered_set<int>::iterator it = us.begin(); it != us.end(); it++){v.push_back(*it);}
        sort(v.begin(), v.end());
        return v;
    }
};

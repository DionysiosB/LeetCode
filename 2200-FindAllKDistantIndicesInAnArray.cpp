class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        std::set<int> s;
        for(int p = 0; p < nums.size(); p++){
            if(nums[p] != key){continue;}
            for(int u = std::max(0, p - k); u <= p + k && u < nums.size(); u++){s.insert(u);}
        }
        
        std::vector<int> v;
        for(std::set<int>::iterator it = s.begin(); it != s.end(); it++){v.push_back(*it);}
        return v;
    }
};

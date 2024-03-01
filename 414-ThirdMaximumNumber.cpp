class Solution {
public:
    int thirdMax(vector<int>& nums) {

        std::set<int> s;
        for(int p = 0; p < nums.size(); p++){s.insert(nums[p]);}
        if(s.size() < 3){return *s.rbegin();}
        else{
            std::set<int>::reverse_iterator it = s.rbegin();
            it++; it++;
            return *it;
        }
    }
};

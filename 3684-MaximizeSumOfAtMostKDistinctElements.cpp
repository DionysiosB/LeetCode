class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {

        std::set<int, std::greater<int> > s;
        for(int x : nums){s.insert(x);}

        std::vector<int> v;
        for(int x : s){
            v.push_back(x);
            if(v.size() >= k){break;}
        }

        return v;
    }
};

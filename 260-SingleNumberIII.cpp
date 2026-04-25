class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        std::unordered_set<int> s;
        for(int x: nums){
            if(s.count(x)){s.erase(x);}
            else{s.insert(x);}
        }

        std::vector<int> v;
        for(std::unordered_set<int>::iterator it = s.begin(); it != s.end(); it++){v.push_back(*it);}
        return v;
    }
};

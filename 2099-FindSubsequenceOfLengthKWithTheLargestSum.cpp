class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {

        std::multiset<int> ms;
        for(int p = 0; p < nums.size(); p++){
            ms.insert(nums[p]);
            if(ms.size() > k){ms.erase(ms.begin());}
        }


        std::vector<int> v;
        for(int p = 0; p < nums.size(); p++){
            std::multiset<int>::iterator it = ms.find(nums[p]);
            if(it != ms.end()){v.push_back(*it); ms.erase(it);}
        }

        return v;
    }
};

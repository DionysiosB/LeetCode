class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        if(nums.size() % k){return false;}
        std::multiset<int> ms;
        for(int p = 0; p < nums.size(); p++){ms.insert(nums[p]);}
        for(int p = 0; p < nums.size() / k; p++){
            long start = *ms.begin();
            ms.erase(ms.begin());
            for(long u = 1; u < k; u++){
                std::multiset<int>::iterator it = ms.find(start + u);
                if(it == ms.end()){return false;}
                ms.erase(it);
            }
        }

        return true;
    }
};

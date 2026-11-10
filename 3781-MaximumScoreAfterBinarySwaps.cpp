class Solution {
public:
    long long maximumScore(vector<int>& nums, string s) {

        const int n = s.size();
        std::multiset<int> w;
        for(int p = n - 1; p >= 0; p--){
            w.insert(nums[p]);
            if(s[p] == '0'){w.erase(w.begin());}
        }

        long long total(0);
        for(int x : w){total += x;}
        return total;
    }
};

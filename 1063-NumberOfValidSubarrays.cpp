class Solution {
public:
    int validSubarrays(vector<int>& nums) {
        std::stack<int> s; int cnt(0);
        for(int p = 0; p < nums.size(); p++){
            while(!s.empty() && nums[p] < nums[s.top()]){cnt += (p - s.top()); s.pop();}
            s.push(p);
        }
        
        while(!s.empty()){cnt += nums.size() - s.top(); s.pop();}
        return cnt;
    }
};

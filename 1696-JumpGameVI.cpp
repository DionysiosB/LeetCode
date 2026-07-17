class Solution {
public:
    int maxResult(vector<int>& nums, int k) {

        std::vector<int> f(nums.size());
        f[0] = nums[0];

        std::priority_queue<std::pair<int, int> > q;
        q.push(std::make_pair(nums[0], 0));

        for(int p = 1; p < nums.size(); p++){
            while(q.top().second + k < p){q.pop();}
            f[p] = nums[p] + q.top().first;
            q.push(std::make_pair(f[p], p));
        }

        return f.back();
    }
};

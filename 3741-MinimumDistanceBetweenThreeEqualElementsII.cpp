class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        
        std::unordered_map<int, std::vector<int> > m;
        for(int p = 0; p < nums.size(); p++){m[nums[p]].push_back(p);}
        int ans(-1);
        for(std::pair<int, std::vector<int> > x : m){
            std::vector<int> v = x.second;
            if(v.size() < 3){continue;}
            for(int p = 2; p < v.size(); p++){
                int dist = 2 * (v[p] - v[p - 2]);
                if(ans < 0 || dist < ans){ans = dist;}
            }
        }

        return ans;
        
    }
};

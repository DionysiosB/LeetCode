class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {

        std::unordered_map<int, int> f;
        for(int x : nums){
            if(x >= k){continue;}
            ++f[x];
        }

        int total(0);
        for(std::pair<int, int> x : f){
            int key = x.first;
            int val = x.second;

            if(2 * key == k){total += val / 2;}
            else if(2 * key < k && f.count(k - key)){
                int other = f[k - key];
                total += (val < other ? val : other);
            }
        }

        return total;
    }
};

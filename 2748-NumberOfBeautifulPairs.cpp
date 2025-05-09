class Solution {
public:

    int gcd(int a, int b){return b ? gcd(b, a % b) : a;}

    int countBeautifulPairs(vector<int>& nums) {
        std::vector<int> v(10, 0);
        int cnt(0);
        for(int p = nums.size() - 1; p >= 0; p--){
            int a(nums[p]); while(a >= 10){a /= 10;}
            int b = nums[p] % 10;

            for(int d = 1; d <= 9; d++){
                if(gcd(a, d) != 1){continue;}
                cnt += v[d];
            }

            ++v[b];
        }

        return cnt;
    }
};

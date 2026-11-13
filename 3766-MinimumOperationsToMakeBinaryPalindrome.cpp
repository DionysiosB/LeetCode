class Solution {
public:

    bool isPalindrome(int x){
        std::vector<bool> v;
        while(x){v.push_back(x % 2); x /= 2;}
        for(int p = 0; p < v.size() - p; p++){if(v[p] != v[v.size() - 1 - p]){return false;}}
        return true;
    }

    vector<int> minOperations(vector<int>& nums) {

        const int B = 5057;
        const int n = nums.size();

        std::vector<bool> v(B, 0);
        for(int p = 0; p < B; p++){v[p] = isPalindrome(p);}

        std::vector<int> d(B, B);
        int last(0);
        for(int p = 0; p < B; p++){
            if(v[p]){last = p;}
            d[p] = p - last;
        }

        last = 10 * B;
        for(int p = B - 1; p >= 0; p--){
            if(v[p]){last = p;}
            d[p] = std::min(d[p], last - p);
        }

        std::vector<int> f(n);
        for(int p = 0; p < n; p++){f[p] = d[nums[p]];}
        return f;
    }
};

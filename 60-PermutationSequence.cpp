class Solution {
public:
    std::string getPermutation(int n, int k) {

        std::vector<char> a(n);
        for(int p = 0; p < n; p++){a[p] = '1' + p;}
        for(int p = 1; p < k; p++){std::next_permutation(a.begin(), a.end());}

        std::string ans;
        for(int p = 0; p < n; p++){ans += a[p];}
        return ans;
    }
};

class Solution {
public:
    int longestPalindrome(string s) {
        std::vector<int> v(256, 0);
        for(int p = 0; p < s.size(); p++){++v[s[p]];}
        int length(0); bool central(0);
        for(int p = 0; p < v.size(); p++){
            length += 2 * (v[p] / 2);
            if(v[p] % 2){central = 1;}
        }
        
        return length + central;
    }
};

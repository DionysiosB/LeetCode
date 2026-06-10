class Solution {
public:
    string reverseStr(string s, int k) {
        
        for(int p = 0; p < s.size(); p += 2 * k){
            long left(p), right(p + k - 1);
            if(right >= s.size()){right = s.size() - 1;}
            while(left < right){std::swap(s[left], s[right]); ++left; --right;}
        }
        return s;
    }
};

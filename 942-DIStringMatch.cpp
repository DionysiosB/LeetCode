class Solution {
public:
    vector<int> diStringMatch(string s) {
        
        std::vector<int> v(s.size() + 1);
        int low(0), high(s.size());
        for(int p = 0; p < s.size(); p++){
            if(s[p] == 'I'){v[p] = low++;}
            else{v[p] = high--;}
        }
        v.back() = low;
        return v;
    }
};

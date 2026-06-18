class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {

        std::vector<int> v(s.size(), 0);
        for(std::vector<int> sh : shifts){
            v[sh[0]] += 2 * sh[2] - 1; 
            if(sh[1] + 1 < v.size()){v[sh[1] + 1] -= 2 * sh[2] - 1;}
        }

        int cs(0);
        for(int p = 0; p < s.size(); p++){
            cs += v[p]; cs %= 26;
            if(s[p] + cs < 'a'){s[p] += cs + ('z' - 'a' + 1);}
            else if(s[p] + cs > 'z'){s[p] += cs + ('a' - 'z' - 1);}
            else{s[p] += cs;}
        }

        return s;
    }
};

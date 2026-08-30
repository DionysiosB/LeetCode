class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {

        int a(-1), b(-1);
        for(size_t p = 0; p < s1.size(); p++){
            if(s1[p] == s2[p]){continue;}
            else if(a < 0){a = p;}
            else if(b < 0){b = p;}
            else{return false;}
        }

        if(a < 0){return true;}
        else if(b < 0){return false;}
        
        return s1[a] == s2[b] && s1[b] == s2[a];
    }
};

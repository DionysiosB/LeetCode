class Solution {
public:
    bool canBeEqual(string s1, string s2) {

        for(int p = 0; p < 4; p++){
            if(s1[p] != s2[p]){
                if(p < 2 && s1[p + 2] == s2[p]){s1[p + 2] = s1[p];}
                else{return false;}
            }
        }

        return true;
    }
};

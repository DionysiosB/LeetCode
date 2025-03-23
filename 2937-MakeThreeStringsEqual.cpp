class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        
        int idx(-1);
        for(int p = 0; p < s1.size() && p < s2.size() && p < s3.size(); p++){
            if(s1[p] == s2[p] && s2[p] == s3[p]){idx = p;}
            else{break;}
        }
        
        if(idx < 0){return idx;}
        else{return s1.size() + s2.size() + s3.size() - 3 * (idx + 1);}
    }
};

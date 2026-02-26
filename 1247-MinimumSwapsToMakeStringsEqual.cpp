class Solution {
public:
    int minimumSwap(string s1, string s2) {

        int da(0), db(0);
        for(long p = 0; p < s1.size(); p++){
            if(s1[p] == s2[p]){continue;}
            else if(s1[p] == 'x'){++da;}
            else{++db;}
        }

        if((da + db) % 2){return -1;}
        return (da / 2) + (db / 2) + 2 * ((da % 2) && (db % 2));
    }
};

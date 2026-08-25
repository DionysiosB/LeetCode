class Solution {
public:
    bool isDecomposable(string s) {

        s += "_";
        bool two(false);
        int cnt(0);
        for(int p = 0; p < s.size(); p++){
            if(!p || s[p - 1] != s[p]){
                if(cnt % 3){
                    if(cnt % 3 == 2 && two){return false;}
                    else if(cnt % 3 == 2){two = true;}
                    else{return false;}
                }
                cnt = 1;
            }
            else{++cnt;}
        }

        return two;
    }
};

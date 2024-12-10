class Solution {
public:
    int minOperations(string s) {
        int sz(0), sa(0);
        for(int p = 0; p < s.size(); p++){
            if(p % 2){
                sa += (s[p] == '1');
                sz += (s[p] == '0');
            }
            else{
                sa += (s[p] == '0');
                sz += (s[p] == '1');
            }
        }

        return (sz < sa ? sz : sa);
    }
};

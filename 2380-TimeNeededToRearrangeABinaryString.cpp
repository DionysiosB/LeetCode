class Solution {
public:
    int secondsToRemoveOccurrences(string s) {

        int a(0), z(0), cnt(0);
        for(char d : s){
            if(d == '0'){
                ++z;
                a -= (a > 0);
            }
            else if(z){
                cnt = z + a;
                ++a;
            }
        }

        return cnt;
    }
};

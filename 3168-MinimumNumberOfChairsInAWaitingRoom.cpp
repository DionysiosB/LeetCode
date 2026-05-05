class Solution {
public:
    int minimumChairs(string s) {

        int cnt(0), mxc(0);
        for(int p = 0; p < s.size(); p++){
            cnt += (s[p] == 'E') - (s[p] == 'L');
            mxc = (mxc > cnt ? mxc : cnt);
        }
        return mxc;
    }
};

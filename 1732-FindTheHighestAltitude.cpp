class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int alt(0), mx(0);
        for(int p = 0; p < gain.size(); p++){
            alt += gain[p];
            mx = (mx > alt ? mx : alt);
        }
        return mx;
    }
}

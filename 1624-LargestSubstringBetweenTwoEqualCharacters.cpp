class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {

        const size_t B = 26;
        std::vector<int> start(B, -1), stop(B, -1);
        for(size_t p = 0; p < s.size(); p++){
            int x = s[p] - 'a';
            if(start[x] < 0){start[x] = p;}
            stop[x] = p;
        }

        int mxdist(-1);
        for(size_t p = 0; p < B; p++){
            int cur = stop[p] - start[p] - 1;
            mxdist = (mxdist > cur ? mxdist : cur);
        }

        return mxdist;
    }
};

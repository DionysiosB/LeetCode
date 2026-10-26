class Solution {
public:
    int maxDistance(vector<string>& words) {

        int mxdist(0);
        for(int p = 0; p < words.size(); p++){
            for(int q = words.size() - 1; q > p; q--){
                if(words[p] == words[q]){continue;}
                int dist = q - p + 1;
                mxdist = (mxdist > dist ? mxdist : dist);
                break;
            }
        }

        return mxdist;
    }
};

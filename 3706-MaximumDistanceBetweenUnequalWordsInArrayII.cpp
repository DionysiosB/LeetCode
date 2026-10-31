class Solution {
public:
    int maxDistance(vector<string>& words) {

        int mxdist(0), first(0);
        for(int p = 1; p < words.size(); p++){
            if(words[p] != words[0]){
                if(!first){first = p;}
                mxdist = ((mxdist > p + 1) ? mxdist : (p + 1));
            }
            else if(first){mxdist = ((mxdist > p - first + 1) ? mxdist : (p - first + 1));}
        }

        return mxdist;
        
    }
};

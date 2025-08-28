/* The knows API is defined for you.
      bool knows(int a, int b); */

class Solution {
public:
    int findCelebrity(int n) {
        int cand(0);
        for(int p = 0; p < n; p++){if(knows(cand, p)){cand = p;}}
        for(int p = 0; p < n; p++){
            if(p == cand){continue;}
            if(knows(cand, p) || !knows(p, cand)){return -1;}
        }
        return cand;
    }
};

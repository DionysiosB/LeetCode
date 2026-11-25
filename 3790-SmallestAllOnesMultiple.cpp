class Solution {
public:
    int minAllOneMultiple(int k) {

        std::unordered_set<int> s;
        int cnt(0), n(0);
        for(long p = 0; p < k; p++){
            n = 10 * n + 1; n %= k;
            ++cnt;
            if(!n){return cnt;}
            else if(s.count(n)){return -1;}
            s.insert(n);
        }

        return -1;
    }
};

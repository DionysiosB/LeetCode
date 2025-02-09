class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        std::multiset<long long, std::greater<long long> > gs;
        long long total(0);
        for(int p = 0; p < gifts.size(); p++){total += gifts[p]; gs.insert(gifts[p]);}
        for(int p = 0; p < k; p++){
            std::multiset<long long, std::greater<int> >::iterator it = gs.begin();
            long long mxp = *it;
            gs.erase(it);
            long long rem = std::sqrt(mxp);
            total -= (mxp - rem);
            gs.insert(rem);
        }
        
        return total;
    }
};

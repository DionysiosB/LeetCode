class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size() % groupSize){return false;}
        std::multiset<int> ms;
        for(int p = 0; p < hand.size(); p++){ms.insert(hand[p]);}
        for(int p = 0; p < hand.size() / groupSize; p++){
            long start = *ms.begin();
            ms.erase(ms.begin());
            for(long u = 1; u < groupSize; u++){
                std::multiset<int>::iterator it = ms.find(start + u);
                if(it == ms.end()){return false;}
                ms.erase(it);
            }
        }

        return true;

        
    }
};

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        std::multiset<int, std::greater<int> > s;
        for(int p = 0; p < stones.size(); p++){s.insert(stones[p]);}

        while(s.size() >= 2){
            std::multiset<int>::iterator yit(s.begin()); int y(*yit); s.erase(yit);
            std::multiset<int>::iterator xit(s.begin()); int x(*xit); s.erase(xit);
            if(y - x){s.insert(y - x);}
        }

        return s.empty() ? 0 : (*s.begin());
    }
};

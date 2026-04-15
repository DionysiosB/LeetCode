class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {

        std::deque<int> dq;
        for(int p = 0; p < deck.size(); p++){dq.push_back(p);}

        std::vector<int> v(deck.size(), 0);
        sort(deck.begin(), deck.end());
        int idx(0);

        while(!dq.empty()){
            int pos = dq.front();
            dq.pop_front();
            if(!dq.empty()){int nxt = dq.front(); dq.pop_front(); dq.push_back(nxt);}
            v[pos] = deck[idx++];
        }

        return v;
    }
};

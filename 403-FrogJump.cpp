class Solution {
public:
    typedef long long ll;
    bool canCross(vector<int>& stones) {
        std::map<ll, std::set<ll> > m;
        for(ll p = 0; p < stones.size(); p++){m[stones[p]] = std::set<ll>();}
        m[stones[0]].insert(1);

        for(std::map<ll, std::set<ll> >::iterator mit = m.begin(); mit != m.end(); mit++){
            ll pos = mit->first;
            std::set<ll> moves = mit->second;
            for(std::set<ll>::iterator sit = moves.begin(); sit != moves.end(); sit++){
                int dist = *sit;
                int nxt  = pos + dist;
                
                if(m.count(nxt)){
                    if(nxt == stones.back()){return true;}
                    m[nxt].insert(dist - 1);
                    m[nxt].insert(dist);
                    m[nxt].insert(dist + 1);
                }
            }
        }

        return false;
    }
};

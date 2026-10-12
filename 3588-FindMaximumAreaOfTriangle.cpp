class Solution {
public:
    long long maxArea(vector<vector<int>>& coords) {

        std::map<long long, std::set<long long> > mx, my;

        for(long long p = 0; p < coords.size(); p++){
            long long x = coords[p][0];
            long long y = coords[p][1];
            mx[x].insert(y);
            my[y].insert(x);
        }

        long long ans(0);
        long long mnx(mx.begin()->first), mxx(mx.rbegin()->first);
        for(std::map<long long, std::set<long long> >::iterator it = mx.begin(); it != mx.end(); it++){
            long long cx = it->first;
            std::set<long long> sy = it->second;
            long long cmn = *sy.begin();
            long long cmx = *sy.rbegin();
            long long area = (cmx - cmn) * std::max((cx - mnx), (mxx - cx));
            ans = (ans > area ? ans : area);
        }

        long long mny(my.begin()->first), mxy(my.rbegin()->first);
        for(std::map<long long, std::set<long long> >::iterator it = my.begin(); it != my.end(); it++){
            long long cy = it->first;
            std::set<long long> sx = it->second;
            long long cmn = *sx.begin();
            long long cmx = *sx.rbegin();
            long long area = (cmx - cmn) * std::max((cy - mny), (mxy - cy));
            ans = (ans > area ? ans : area);
        }

        return (ans ? ans : -1);
    }
};

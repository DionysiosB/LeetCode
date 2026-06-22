class Solution {
public:
    int numTeams(vector<int>& rating) {

        int n(rating.size());
        std::vector<int> prevs(n), prevl(n);

        std::set<int> s;
        for(int p = 0; p < n; p++){
            s.insert(rating[p]);
            std::set<int>::iterator it = s.find(rating[p]);
            int cnts = std::distance(s.begin(), it);
            int cntl = std::distance(it, s.end()) - 1;
            prevs[p] = cnts;
            prevl[p] = cntl;
        }

        s.clear();
        int total(0);
        for(int p = n - 1; p >= 0; p--){
            s.insert(rating[p]);
            std::set<int>::iterator it = s.find(rating[p]);
            int cnts = std::distance(s.begin(), it);
            int cntl = std::distance(it, s.end()) - 1;
            total += (prevl[p] * cnts) + (prevs[p] * cntl);
        }

        return total;

    }
};

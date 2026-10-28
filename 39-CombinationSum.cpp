class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        std::vector<std::set<std::multiset<int>>> v(target + 1);
        for(int p = 1; p <= target; p++){
            for(int x : candidates){
                if(p < x){continue;}
                if(p == x){std::multiset<int> tm; tm.insert(x); v[p].insert(tm);}
                else{
                    std::set<std::multiset<int> > ts = v[p - x];
                    for(std::multiset<int> tm : ts){
                        std::multiset<int> cur = tm;
                        tm.insert(x);
                        v[p].insert(tm);
                    }
                }
            }
        }


        std::set<std::multiset<int>> rsm = v.back();
        std::vector<std::vector<int>> w;
        for(std::multiset<int> ms : rsm){
            std::vector<int> cur;
            for(int x : ms){cur.push_back(x);}
            w.push_back(cur);
        }

        return w;        
    }
};

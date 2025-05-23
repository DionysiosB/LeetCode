class Solution {
public:

    bool check(std::vector<int> v){
        std::set<int> ra, rb;
        for(int p = 0; p < v.size(); p++){
            if(ra.count(p + v[p])){return false;}
            ra.insert(p + v[p]);
            if(rb.count(p - v[p])){return false;}
            rb.insert(p - v[p]);
        }

        return true;
    }

    void dfs(std::vector<int> v, std::set<int> free, std::vector<std::vector<int> > &sols){

        for(std::set<int>::iterator it = free.begin(); it != free.end(); it++){
            int col = *it;
            std::vector<int> tst(v);
            tst.push_back(col);
            if(check(tst)){
                std::set<int> t(free); t.erase(col);
                if(t.empty()){sols.push_back(tst);}
                else{dfs(tst, t, sols);}
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        std::vector<std::vector<int> > v;
        std::vector<int> d; std::set<int> s; 
        for(int p = 0; p < n; p++){s.insert(p);}
        dfs(d, s, v);

        std::vector<std::vector<string> > res;
        for(int p = 0; p < v.size(); p++){
            std::vector<std::string> cb;
            for(int row = 0; row < n; row++){
                std::string dots(n, '.');
                dots[v[p][row]] = 'Q';
                cb.push_back(dots);
            }
            res.push_back(cb);
        }

        return res;
    }
};

class Solution {
public:

    void dfs(std::vector<int> &v, std::set<int> &s, int &cnt){
        if(s.empty()){++cnt; return;}
        for(std::set<int>::iterator it = s.begin(); it != s.end(); it++){
            int x = *it;
            int pos = v.size() + 1;
            if((x % pos) && (pos % x)){continue;}
            std::set<int> z(s); z.erase(x);
            std::vector<int> w(v); w.push_back(x);
            dfs(w, z, cnt);
        }
    }

    int countArrangement(int n) {
        int cnt(0); std::vector<int> v;
        std::set<int> s; for(int p = 1; p <= n; p++){s.insert(p);}
        dfs(v, s, cnt);
        return cnt;
    }
};

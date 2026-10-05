class Solution {
public:
    int minDeletion(string s, int k) {
        const int B = 26;
        std::vector<int> v(B);
        for(char x : s){++v[x - 'a'];}
        std::vector<int> w;
        for(int x : v){
            if(!x){continue;}
            w.push_back(x);
        }
        sort(w.rbegin(), w.rend());
        int cnt(0);
        for(int p = w.size() - 1; p >= k; p--){cnt += w[p];}
        return cnt;
    }
};

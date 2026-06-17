class Solution {
public:
    int getKth(int lo, int hi, int k) {

        std::vector<int> v(hi + 1, -1); v[1] = 0;
        for(int p = 2; p < v.size(); p++){v[p] = getPower(p, v);}
        std::vector<std::pair<int, int> > w;
        for(int p = lo; p <= hi; p++){w.push_back(std::make_pair(v[p], p));}

        sort(w.begin(), w.end());
        for(int p = 0; p < w.size(); p++){printf("%d->%d\n", w[p].second, w[p].first);}

        return w[k-1].second;
    }

private:
    int getPower(int x, std::vector<int> &v){
        if(x < v.size() && v[x] >= 0){return v[x];}
        int cnt = 1 + getPower(x % 2 ? (3 * x + 1) : x / 2, v);
        if(x < v.size()){v[x] = cnt;}
        return cnt;
    }
};

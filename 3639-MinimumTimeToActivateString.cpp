class Solution {
public:
    int minTime(string s, vector<int>& order, int k) {

        const int n = s.size();
        std::set<int> w; w.insert(-1); w.insert(n);
        long long total(0);
        for(int p = 0; p < n; p++){
            const int idx = order[p];
            w.insert(idx);
            long long left  = *std::prev(w.find(idx));
            long long right = *std::next(w.find(idx));
            total += (idx - left) * (right - idx);
            if(total >= k){return p;}
        }

        return -1;
    }
};

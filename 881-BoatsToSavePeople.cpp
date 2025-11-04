class Solution {
public:
    int numRescueBoats(vector<int>& w, int lim) {
        sort(w.begin(), w.end());
        long left(0), right(w.size() - 1),cnt(0);
        while(left <= right){
            if(left == right){return ++cnt;}
            if(w[left] + w[right] <= lim){++left;}
            --right; ++cnt;
        }

        return cnt;
    }
};

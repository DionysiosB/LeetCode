class Solution {
public:
    bool check(std::vector<int>& v, int d, long long dist){
        long long cur = -2e15 - 7;
        for(long long p = 0; p < v.size(); p++){
            if(cur + dist > v[p] + d){return false;}
            long long f = cur + dist;
            long long g = v[p];
            cur = (f > g ? f : g);
        }

        return true;
    }

    int maxPossibleScore(vector<int>& v, int d) {
        
        sort(v.begin(), v.end());

        long long left = 0;
        long long right = v.back() + 7LL * d;
        int res(-1);
        while(left <= right){
            long long mid = (left + right) / 2;
            if(check(v, d, mid)){res = mid; left = mid + 1;}
            else{right = mid - 1;}
        }

        return res;
    }
};

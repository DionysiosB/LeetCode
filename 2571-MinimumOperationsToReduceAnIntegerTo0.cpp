class Solution {
public:
    int minOperations(int n) {
        std::vector<int> v;
        while(n){v.push_back(n % 2); n /= 2;}
        int cur(0), cnt(0);
        for(int p = 0; p < v.size(); p++){
            if(v[p]){++cur;}
            else{
                if(cur > 1){cur = 1; ++cnt;}
                else if(cur > 0){++cnt; cur = 0;}
            }
        }

        cnt += (cur < 2 ? cur : 2);
        return cnt;
    }
};

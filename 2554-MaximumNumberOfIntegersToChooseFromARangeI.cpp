class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        std::set<long> bs;
        for(int p = 0; p < banned.size(); p++){if(banned[p] <= n){bs.insert(banned[p]);}}
        
        long long cs(0);
        int cnt(0);
        for(int p = 1; p <= n; p++){
            if(bs.count(p)){bs.erase(p);}
            else if(cs + p <= maxSum){++cnt; cs += p;}
            else{break;}
        }

        return cnt;
    }
};

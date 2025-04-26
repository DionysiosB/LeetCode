class Solution {
public:
    
    bool check(const std::vector<int> &q, int n, int m){
        int cnt(0);
        for(int p = 0; p < q.size(); p++){
            cnt += (q[p] + m - 1) / m;
            if(cnt > n){return false;}
        }
        
        return true;
    }
    
    int minimizedMaximum(int n, vector<int>& quantities) {
        
        int res(0), left(1), right(1e5 + 7);
        while(left <= right){
            int mid = (left + right) / 2;
            if(check(quantities, n, mid)){res = mid; right = mid - 1;}
            else{left = mid + 1;}
        }
        
        return res;
    }
};

class Solution {
public:
    
    bool check(const std::vector<int> &v, int k, int len){
        int cnt(0);
        for(int p = 0; p < v.size(); p++){
            cnt += v[p] / len;
            if(cnt >= k){return true;}
        }
        return false;
    }
    
    
    int maxLength(vector<int>& ribbons, int k) {
        int res(0), left(1), right(1e6);
        while(left <= right){
            int mid = (left + right) / 2;
            if(check(ribbons, k, mid)){res = mid; left = mid + 1;}
            else{right = mid - 1;}
        }
        
        return res;
    }
};

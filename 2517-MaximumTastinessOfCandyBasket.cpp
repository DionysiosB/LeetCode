class Solution {
public:

    bool check(std::vector<int>& v, int dist, int k){
        int cnt(1), prev(v[0]);
        for(long p = 1; p < v.size() && cnt < k; p++){
            if(v[p] >= prev + dist){++cnt; prev = v[p];}
        }

        return cnt >= k;
    }

    
    int maximumTastiness(vector<int>& price, int k) {

        sort(price.begin(), price.end());

        int left(0), right(price.back()), res(0);
        
        while(left <= right){
            int mid = (left + right) / 2;
            if(check(price, mid, k)){res = mid; left = mid + 1;}
            else{right = mid - 1;}
        }

        return res;
    }
};

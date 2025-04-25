class Solution {
public:
    
    bool check(const std::vector<int> &time, long long total, long long dur){
        long long cnt(0);
        for(int p = 0; p < time.size(); p++){
            cnt += dur / time[p];
            if(cnt >= total){return true;}
        }
        
        return false;
    }
    
    
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long left(0), right(1LL * totalTrips * time[0]), res(0);
        while(left <= right){
            long long mid = (left + right) / 2;
            if(check(time, totalTrips, mid)){res = mid; right = mid - 1;}
            else{left = mid + 1;}
        }
        
        return res;
    }
};

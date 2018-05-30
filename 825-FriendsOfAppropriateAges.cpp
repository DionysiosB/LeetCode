class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
        
        int n = ages.size();
        sort(ages.begin(), ages.end());

        int left(0), right(0), total(0);
        for(long p = 0; p < n; p++){
            while((left < n) && (ages[left] <= 0.5 * ages[p] + 7)){++left;}
            while((right + 1 < n) && (ages[right + 1] <= 100) && (ages[right + 1] <= ages[p])){++right;}
            total += (right < p) && (left <= right);
            if(left < right){total += (right - left);}            
        }
        
        return total;
    }
};

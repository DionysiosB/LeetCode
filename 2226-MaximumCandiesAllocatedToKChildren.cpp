class Solution {
public:
    
    bool check(const std::vector<int> &candies, const long long k, long long n){  
        long long num(0);
        
        for(int p = 0; p < candies.size(); p++){
            num += (candies[p] / n);
            if(num >= k){return true;}
        }
        return false;
    }
    
    
    int maximumCandies(vector<int>& candies, long long k) {   
        long long ans(0), left(1), right(1e13);
        while(left <= right){
            long long mid = (left + right) / 2;
            if(check(candies, k, mid)){ans = mid; left = mid + 1;}
            else{right = mid - 1;}
        }
        
        return (int)ans;
    }
};

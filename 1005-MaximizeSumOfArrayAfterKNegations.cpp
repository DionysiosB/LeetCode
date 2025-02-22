class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        
        std::multiset<int> s;
        int total(0), mn(1e3);
        for(int p = 0; p < nums.size(); p++){
            if(nums[p] < 0){s.insert(nums[p]);}
            total += nums[p];
            if(std::abs(nums[p]) < mn){mn = std::abs(nums[p]);}
        }
        
        while(!s.empty()){
            if(!k){break;}
            else{--k;}
            std::multiset<int>::iterator it = s.begin();
            int x = *it; s.erase(it);
            total -= 2 * x;
        }
        
        if(k % 2){total -= 2 * mn;}
        return total;        
    }
};

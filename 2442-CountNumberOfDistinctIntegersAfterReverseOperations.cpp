class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        
        std::set<int> s;
        for(int p = 0; p < nums.size(); p++){
            s.insert(nums[p]);
            int x(nums[p]), y(0);
            while(x){y = 10 * y + x % 10; x /= 10;}  
            s.insert(y);   
        }
        
        return s.size();
    }
};

class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {

        std::vector<int> odds, evens;
        for(int p = 0; p < nums.size(); p++){
            if(p % 2){odds.push_back(nums[p]);}
            else{evens.push_back(nums[p]);}
        }

        sort(odds.rbegin(), odds.rend());
        sort(evens.begin(), evens.end());

        for(int p = 0; p < nums.size(); p++){
            if(p % 2){nums[p] = odds[p / 2];}
            else{nums[p] = evens[p / 2];}
        }

        return nums;
    }
};

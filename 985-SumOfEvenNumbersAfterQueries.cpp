class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {

        int odds(0), evens(0);
        for(int p = 0; p < nums.size(); p++){
            if(nums[p] % 2){odds += nums[p];}
            else{evens += nums[p];}
        }

        std::vector<int> w(queries.size());
        for(int p = 0; p < queries.size(); p++){
            int val = queries[p][0];
            int idx = queries[p][1];

            if(nums[idx] % 2){odds -= nums[idx];}
            else{evens -= nums[idx];}

            nums[idx] += val;
            if(nums[idx] % 2){odds += nums[idx];}
            else{evens += nums[idx];}

            w[p] = evens;
        }

        return w;
        
    }
};

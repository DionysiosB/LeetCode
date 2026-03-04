class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mn(1e5 + 7), mnpos(-1);
        int mx(-1e5 - 7), mxpos(-1);
        for(int p = 0; p < nums.size(); p++){
            if(nums[p] < mn){mn = nums[p]; mnpos = p;}
            if(nums[p] > mx){mx = nums[p]; mxpos = p;}
        }

        if(mnpos > mxpos){int tmp = mnpos; mnpos = mxpos; mxpos = tmp;}
        int da = mnpos;
        int db = nums.size() - mxpos - 1;
        int dc = mxpos - mnpos - 1;

        int ans = (da > db ? da : db);
        ans = (ans > dc ? ans : dc);
        return nums.size() - ans;
        
    }
};

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int mxa(0), mxb(0), mna(1e4), mnb(1e4);
        for(int p = 0; p < nums.size(); p++){
            int x = nums[p];
            if(x >= mxa){mxb = mxa; mxa = x;}
            else if(x > mxb){mxb = x;}
            if(x <= mna){mnb = mna; mna = x;}
            else if(x < mnb){mnb = x;}
        }

        return (mxa * mxb - mna * mnb);
        
    }
};

class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int n = nums.size();
        int s(0), na(1e5), nb(1e5), da(1e5), db(1e5);
        for(int p = 0; p < n; p++){
            int x = nums[p];
            if(x % 3 == 1){
                if(x < na){nb = na; na = x;}
                else if(x < nb){nb = x;}
            }
            else if(x % 3 == 2){
                if(x < da){db = da; da = x;}
                else if(x < db){db = x;}
            }
            
            s += x;
        }
        
        if(s % 3 == 1){
            int diff = da + db;
            diff = (diff < na ? diff : na);
            s -= diff;
        }
        else if(s % 3 == 2){
            int diff = na + nb;
            diff = (diff < da ? diff : da);
            s -= diff;
        }
        
        return s;
    }
};

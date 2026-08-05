class Solution {
public:
    int maxLength(vector<int>& nums) {

        const int n = nums.size();
        if(n <= 2){return n;}

        int mxlen(2);
        for(int p = 0; p < n; p++){
            int cnt(0);
            bool two(0), three(0), five(0), seven(0);
            for(int q = p; q < n; q++){
                int x = nums[q];
                if(x % 2 == 0){
                    if(two){break;}
                    two = true;
                }
                if(x % 3 == 0){
                    if(three){break;}
                    three = true;
                }
                if(x % 5 == 0){
                    if(five){break;}
                    five = true;
                }
                if(x % 7 == 0){
                    if(seven){break;}
                    seven = true;
                }

                ++cnt;
                mxlen = std::max(mxlen, cnt);
            }
        }

        return mxlen;
    }
};

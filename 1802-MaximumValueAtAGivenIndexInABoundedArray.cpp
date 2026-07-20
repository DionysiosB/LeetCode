class Solution {
public:

    bool check(long long val, int n, int idx, long long mxs){

        long long total(0);
        if (val > idx){total += (val + val - idx) * (idx + 1) / 2;}
        else {total += (val + 1) * val / 2 + idx - val + 1;};

        if (val >= n - idx) {total += (val + val - n + 1 + idx) * (n - idx) / 2;}
        else {total += (val + 1) * val / 2 + n - idx - val;}   

        return total <= val + mxs;

    }

    int maxValue(int n, int index, int maxSum) {

        int ans(1), left(1), right(maxSum);
        while(left <= right){
            int mid = (left + right) / 2;
            if(check(mid, n, index, maxSum)){ans = mid; left = mid + 1;}
            else{right = mid - 1;}
        }

        return ans;

    }
};

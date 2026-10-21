class Solution {
public:
    long long minimumPerimeter(long long neededApples) {
        long long left(1), right(1e6), res(-1);
        while(left <= right){
            long long x = (left + right) / 2;
            long long total = (4 * x * x * x + 6 * x * x + 2 * x);
            if(total >= neededApples){res = 8 * x; right = x - 1;}
            else{left = x + 1;}
        }

        return res;
    }
};

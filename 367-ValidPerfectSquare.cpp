class Solution {
public:
    bool isPerfectSquare(long num) {
        
        long left(0), right(num);
        while(left <= right){
            long mid = (left + right) / 2;
            if(mid * mid < num){left = mid + 1;}
            else{right = mid - 1;}
        }
        
        return (left * left == num);
    }
};

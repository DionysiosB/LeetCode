class Solution {
public:
    int sumOfMultiples(int n) {
        int sum(0);
        for(int p = 1; p <= n; p++){
            if(p % 3 == 0 | p % 5 == 0 || p % 7 == 0){sum += p;}
        }
        return sum;
    }
};

class Solution {
public:
    vector<int> evenOddBit(int n) {
        
        bool idx(0);
        int odd(0), even(0);
        while(n){
            if(n % 2){
                odd += idx ;
                even += !idx;
            }
            idx = !idx;
            n /= 2;
        }
        
        return std::vector<int>({even, odd});
    }
};

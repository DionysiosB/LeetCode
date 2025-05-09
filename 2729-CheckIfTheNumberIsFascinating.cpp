class Solution {
public:
    bool isFascinating(int n) {
        if(n % 5 == 0 || n > 333){return false;}
        std::vector<int> v(10, 0);

        for(int p = 1; p <= 3; p++){
            int x = p * n;
            while(x){
                if(x % 10 == 0){return false;}
                if(v[x % 10]){return false;}
                v[x % 10] = 1;
                x /= 10;
            }
        }

        return true;
    }
};

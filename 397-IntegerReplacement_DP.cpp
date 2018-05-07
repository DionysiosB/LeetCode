class Solution {
public:
    int integerReplacement(long n) {
        std::vector<int> v(n + 1,0);
        if(n <= 1){return 0;}
        v[0] = v[1] = 0;
        for(long p = 2; p <= n; p++){
            if(p % 2){
                int a = 1 + v[p - 1];
                int b = 2 + v[(p + 1) / 2];
                v[p] = (a < b) ? a : b;
            }
            else{v[p] = 1 + v[p / 2];}
            
            //std::cout << p << " -> " << v[p] << std::endl;
        }
        
        return v[n];
    }
};

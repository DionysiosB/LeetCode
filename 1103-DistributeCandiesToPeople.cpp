class Solution {
public:
    vector<int> distributeCandies(int candies, int n){      
        std::vector<int> v(n, 0);
        int rem(candies), idx(0), g(1);
        while(rem > 0){
            if(rem <= g){v[idx] += rem; rem = 0; break;}
            rem -= g;
            v[idx++] += g++;
            idx %= n; 
        }
        
        return v;
    }
};

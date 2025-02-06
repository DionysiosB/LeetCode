class Solution {
public:
    Solution(){
        v = std::vector<bool>(1007, 0);
        v[0] = 0; v[1] = 0;
        for(int p = 2; p <= 1000; p++){
            v[p] = !v[p - 1];
            for(int d = 2; d * d <= p; d++){
                if(p % d){continue;}
                if(!v[p - d] || !v[p - p / d]){v[p] = 1; break;}
            }
        }
        
    }
    
    bool divisorGame(int n) {return v[n];}
    
    std::vector<bool> v;
};

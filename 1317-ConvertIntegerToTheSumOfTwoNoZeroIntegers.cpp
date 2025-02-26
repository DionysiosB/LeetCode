class Solution {
public:
    
    bool check(int x){
        while(x){
            if(x % 10 == 0){return false;}
            x /= 10;
        }
        return true;
    }
    
    vector<int> getNoZeroIntegers(int n) {
        for(int p = 1; p < n; p++){
            if(check(p) && check(n - p)){return std::vector<int>({p, n - p});}
        }
        
        return std::vector<int>();
    }
};

class Solution {
public:
    bool confusingNumber(int n) {
        
        std::vector<int> v;
        while(n){
            int d = n % 10;
            if(d == 2 || d == 3 || d == 4 || d == 5 || d == 7){return false;}
            v.push_back(d); n /= 10;
        }
        
        for(int p = 0; p < v.size(); p++){
            if((v[p] == 8 || v[p] == 0 || v[p] == 1) && (v[p] == v[v.size() - 1 - p])) {continue;}
            else if(v[p] == 6 && v[v.size() - 1 - p] == 9){continue;}
            else if(v[p] == 9 && v[v.size() - 1 - p] == 6){continue;}
            else{return true;}
        }
        
        return false;
    }
};

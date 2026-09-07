class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        
        int v[10] = {0};
        for(int p = 0; p < digits.size(); p++){++v[digits[p]];}

        int cnt(0);
        for(int p = 100; p <= 999; p += 2){
            int x = p;
            int w[10] = {0};
            while(x){++w[x % 10]; x /= 10;}
            bool possible(true);
            for(int d = 0; possible && d < 10; d++){if(w[d] > v[d]){possible = false;}}
            cnt += possible;
        }

        return cnt;
    }
};

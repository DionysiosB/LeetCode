class Solution {
public:
    string toHexspeak(string num) {
        long n(0);
        for(int p = 0; p < num.size(); p++){n = 10 * n + (num[p] - '0');}
        
        std::string s;
        while(n){
            int m = n % 16;
            if(1 < m && m < 9){return "ERROR";}
            
            if(m == 0){s += 'O';}
            else if(m == 1){s += "I";}
            else{s += (char)((m - 10 ) + 'A');}
            n /= 16;
        }

        std::reverse(s.begin(), s.end());
        return s;
    }
};

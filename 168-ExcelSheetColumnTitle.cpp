class Solution {
public:
    std::string convertToTitle(int n) {
        const int N = 26;
        std::string title("");
        while(n > 0){
            int rem = n % N;
            if(rem > 0){
                char u = ('A' + rem - 1); 
                title = u + title; 
                n -= rem;
            }
            else{title = 'Z' + title; n -= N;}
            n /= N;
        }

        return title;
    }
};

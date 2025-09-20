class Solution {
public:
    int bagOfTokensScore(vector<int>& tk, int power) {
        sort(tk.begin(), tk.end());
        int a(0), b(tk.size() - 1), rem(power), score(0);
        while(a <= b){
            while(a <= b && tk[a] <= rem){++score; rem -= tk[a++];}
            if(a < b && score > 0){--score; rem += tk[b--];}
            else{break;}
        }

        return score;
    }
};

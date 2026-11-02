class Solution {
public:
    string pushDominoes(string dominoes) {

        const int n = dominoes.size();
        std::vector<int> ml(n, dominoes.back() == 'L' ? 0 : -1), mr(n, dominoes[0] == 'R' ? 0 : -1);

        for(int p = 1; p < n; p++){
            if(dominoes[p] == 'R'){mr[p] = 0;}
            else if(dominoes[p] == 'L'){mr[p] = -1;}
            else{mr[p] = mr[p - 1] + (mr[p - 1] >= 0);}
        }

        for(int p = n - 2; p >= 0; p--){
            if(dominoes[p] == 'L'){ml[p] = 0;}
            else if(dominoes[p] == 'R'){ml[p] = -1;}
            else{ml[p] = ml[p + 1] + (ml[p + 1] >= 0);}
        }


        std::string s(dominoes);
        for(long p = 0; p < n; p++){
            if(ml[p] == mr[p]){s[p] = '.';}
            else if(ml[p] < 0){s[p] = 'R';}
            else if(mr[p] < 0){s[p] = 'L';}
            else if(mr[p] < ml[p]){s[p] = 'R';}
            else if(ml[p] < mr[p]){s[p] = 'L';}
        }

        return s;
    }
};

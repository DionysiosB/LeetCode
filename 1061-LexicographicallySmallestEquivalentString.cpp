class Solution {
public:

    int findeq(std::vector<int> &v, int x){
        if(v[x] == x){return x;}
        int u = findeq(v, v[x]);
        v[x] = u;
        return u;
    }

    string smallestEquivalentString(string s1, string s2, string baseStr) {

        const int B = 26;
        std::vector<int> v(B);
        for(int p = 0; p < B; p++){v[p] = p;}

        for(int p = 0; p < s1.size(); p++){
            int x = findeq(v, s1[p] - 'a');
            int y = findeq(v, s2[p] - 'a');
            if(x < y){v[y] = x;}
            else if(y < x){v[x] = y;}
        }

        for(int p = 0; p < baseStr.size(); p++){
            baseStr[p] = (char) ('a' + (findeq(v, baseStr[p] - 'a')));
        }

        return baseStr;
    }
};

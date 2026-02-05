class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds) {
        std::vector<int> v;
        if(rounds[0] <= rounds.back()){
            for(int p = rounds[0]; p <= rounds.back(); p++){v.push_back(p);}
        }
        else{
            for(int p = 1; p <= rounds.back(); p++){v.push_back(p);}
            for(int p = rounds[0]; p <= n; p++){v.push_back(p);}
        }

        return v;
    }
};

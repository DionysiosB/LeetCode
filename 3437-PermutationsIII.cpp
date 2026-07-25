class Solution {
public:

    bool check(std::vector<int> v){
        for(size_t p = 1; p < v.size(); p++){
            if(v[p - 1] % 2 == v[p] % 2){return false;}
        }
        return true;
    }

    vector<vector<int>> permute(int n) {

        std::vector<int> a;
        std::vector<std::vector<int> > v;
        for(int p = 1; p <= n; p++){a.push_back(p);}
        do{
            if(check(a)){v.push_back(a);}
        }while(next_permutation(a.begin(), a.end()));
        return v;
    }
};

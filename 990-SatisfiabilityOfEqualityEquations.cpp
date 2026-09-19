class Solution {
public:

    int f(std::vector<int> &v, int x){
        if(v[x] == x){return x;}
        int y = f(v, v[x]);
        return v[x] = y;
    }


    bool equationsPossible(vector<string>& equations) {

        const int B = 26;
        std::vector<int> v(B);
        for(int p = 0; p < B; p++){v[p] = p;}

        for(std::string eq : equations){
            if(eq[1] == '!'){continue;}
            int left = eq[0] - 'a';
            int right = eq[3] - 'a';

            int x = f(v, left);
            int y = f(v, right);
            if(x != y){v[x] = y;}
        }

        for(std::string eq : equations){
            if(eq[1] == '='){continue;}
            int left = eq[0] - 'a';
            int right = eq[3] - 'a';
            
            int x = f(v, left);
            int y = f(v, right);
            if(x == y){return false;}
        }

        return true;
    }
};

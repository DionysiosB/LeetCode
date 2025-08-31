class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        std::vector<int> res, v;
        for(int p = 0; p < ast.size(); p++){
            if(ast[p] > 0){v.push_back(ast[p]);}
            else{
                while(ast[p] != 0 && !v.empty()){
                    if(v.back() + ast[p] < 0){v.pop_back();}
                    else if(v.back() + ast[p]  == 0){v.pop_back(); ast[p] = 0;}
                    else{ast[p] = 0;}
                }
                if(ast[p] != 0){res.push_back(ast[p]);}
            }
        }

        for(int p = 0; p < v.size(); p++){res.push_back(v[p]);}
        return res;
    }
};

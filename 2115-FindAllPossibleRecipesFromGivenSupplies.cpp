class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {

        std::set<std::string> vs, ms;
        for(std::string supply : supplies){vs.insert(supply);}

        std::map<std::string, std::vector<std::string> > rm;
        for(int p = 0; p < recipes.size(); p++){rm[recipes[p]] = ingredients[p];}

        std::vector<std::string> res;
        std::set<std::string> cs;  //Empty, detect cycles
        for(std::string recipe : recipes){
            if(dfs(recipe, rm, ms, vs, cs)){res.push_back(recipe);}
        }

        return res;
    }

    bool dfs(std::string x, std::map<std::string, std::vector<std::string> > &rm, std::set<std::string> &ms, std::set<std::string> &vs, std::set<std::string> &cs){
        if(vs.count(x)){return true;}
        else if(ms.count(x)){return false;}
        
        if(cs.count(x)){return false;}
        cs.insert(x);

        bool res(true);
        if(rm.count(x)){
            for(std::string y : rm[x]){
                bool cur = dfs(y, rm, ms, vs, cs);
                if(!cur){ms.insert(x); cs.erase(x); return false;}
                vs.insert(y);
            }
        }
        else{cs.erase(x); return false;}

        cs.erase(x);
        vs.insert(x);
        return true;
    }


};

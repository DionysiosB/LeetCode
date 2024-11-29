class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        std::set<std::string> from, s;
        for(int p = 0; p < paths.size(); p++){
            from.insert(paths[p][0]);
            s.insert(paths[p][0]); s.insert(paths[p][1]);
        }

        for(std::set<std::string>::iterator it = s.begin(); it != s.end(); it++){
            if(!from.count(*it)){return *it;}
        }

        return "";
    }
}

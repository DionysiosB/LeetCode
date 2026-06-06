class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size() != goal.size()){return false;}

        std::vector<char> v;
        std::set<char> vs;
        bool dup(false);
        for(int p = 0; p < s.size(); p++){
            if(s[p] == goal[p]){
                if(vs.count(s[p])){dup = true;}
                else{vs.insert(s[p]);}
            }
            else{
                v.push_back(s[p]);
                v.push_back(goal[p]);
            }
        }

        if(v.empty() && dup){return true;}
        else if(v.size() == 4 && v[0] == v[3] && v[1] == v[2]){return true;}
        else{return false;}
    }
};

class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        std::map<char, int> m;
        for(int p = 0; p < s.size(); p++){
            if(m.count(s[p])){m[s[p]] = p - 1 - m[s[p]];}
            else{m[s[p]] = p;}
        }

        for(std::map<char, int>::iterator it = m.begin(); it != m.end(); it++){
            char key = it->first;
            int val = it->second;
            if(distance[key - 'a'] != val){return false;}
        }
        
        return true;
    }
};

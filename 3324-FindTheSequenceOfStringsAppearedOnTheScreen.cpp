class Solution {
public:
    vector<string> stringSequence(string target) {

        std::string s("a");
        std::vector<std::string> v(1, s);
        while(s.size() <= target.size() && s != target){
            if(s.back() == target[s.size() - 1]){s += 'a';}
            else if(s.back() < target[s.size() - 1]){++s.back();}
            v.push_back(s);
        }
        return v;
    }
};

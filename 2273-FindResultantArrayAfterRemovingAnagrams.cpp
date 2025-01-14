class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        std::vector<std::string> v;
        
        for(int p = 0; p < words.size(); p++){
            std::string prev = v.empty() ? "" : v.back();
            std::string cur = words[p];
            sort(cur.begin(), cur.end());
            sort(prev.begin(), prev.end());
            if(prev == cur){continue;}
            v.push_back(words[p]);
        }
        
        return v;
    }
};

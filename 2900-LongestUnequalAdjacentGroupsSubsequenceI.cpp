class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        
        int b(0); std::vector<std::string> wa;
        for(int p = 0; p < groups.size(); p++){
            if(groups[p] == b){
                wa.push_back(words[p]);
                b = 1 - b;
            }
        }
        
        b = 1; std::vector<std::string> wb;
        for(int p = 0; p < groups.size(); p++){
            if(groups[p] == b){
                wb.push_back(words[p]);
                b = 1 - b;
            }
        }
        
        return (wa.size() > wb.size() ? wa : wb);
    }
};

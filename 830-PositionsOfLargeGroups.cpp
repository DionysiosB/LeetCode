class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        int start(0);
        s.push_back('=');
        std::vector<std::vector<int> > v;
        for(int p = 1; p < s.size(); p++){
            if(s[p - 1] != s[p]){
                if(p >= start + 3){v.push_back(std::vector<int>({start, p - 1}));}
                start = p;
            }
        }
        
        return v;
    }
};

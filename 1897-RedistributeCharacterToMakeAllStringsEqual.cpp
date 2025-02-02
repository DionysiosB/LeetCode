class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n = words.size();
        std::vector<int> v(26, 0);
        for(int p = 0; p < n; p++){
            for(int q = 0; q < words[p].size(); q++){++v[words[p][q] - 'a'];}
        }
        
        for(int p = 0; p < 26; p++){if(v[p] % n){return false;}}       
        return true;
        
    }
};

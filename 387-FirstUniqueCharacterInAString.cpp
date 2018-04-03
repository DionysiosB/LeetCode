class Solution{
    public:
        int firstUniqChar(std::string s){
            const int N = 26;
            std::vector<int> count(N, 0);
            for(size_t p = 0; p < s.size(); p++){++count[s[p] - 'a'];}
            for(size_t p = 0; p < s.size(); p++){if(count[s[p] - 'a'] == 1){return p;}}
            return -1;
        }
};

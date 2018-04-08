class Solution{
    public:
        bool isAnagram(string s, string t) {

            if(s.size() != t.size()){return false;}
            const int N = 26;
            std::vector<int> count(N, 0);
            for(int p = 0; p < s.size(); p++){
                ++count[s[p] - 'a'];
                --count[t[p] - 'a'];
            }

            for(int p = 0; p < N; p++){if(count[p] != 0){return false;}}
            return true;
        }

};

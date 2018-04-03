class Solution{
    public:
        bool canConstruct(std::string ransomNote, std::string magazine){

            const int N = 26;
            std::vector<int> rem(N, 0);
            for(size_t p = 0; p < magazine.size(); p++){++rem[magazine[p] - 'a'];}
            for(size_t p = 0; p < ransomNote.size(); p++){
                --rem[ransomNote[p] - 'a'];
                if(rem[ransomNote[p] - 'a'] < 0){return false;}
            }

            return true;
        }
};

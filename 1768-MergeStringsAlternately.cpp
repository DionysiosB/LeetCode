class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        std::string s(""); int a(0), b(0); bool prev(1);
        while(a < word1.size() || b < word2.size()){
            if(prev && a < word1.size()){s += word1[a++];}
            else if(!prev && b < word2.size()){s += word2[b++];}
            prev = !prev;
        }

        return s;
    }
};

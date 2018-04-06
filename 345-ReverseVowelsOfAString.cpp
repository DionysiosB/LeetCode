#include <iostream>
#include <stack>

class Solution{
    public: 

        bool isVowel(char c){
            return (c =='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U');
        }

        std::string reverseVowels(std::string s){
            std::stack<char> t;
            for(size_t p = 0; p < s.size(); p++){if(isVowel(s[p])){t.push(s[p]);}}
            for(size_t p = 0; p < s.size(); p++){if(isVowel(s[p])){s[p] = t.top(); t.pop();}}
            return s;
        }
};

int main(){

    Solution sol;
    std::cout << sol.reverseVowels("Hello") << std::endl;

    return 0;
}

#include <iostream>

bool isSubsequence(std::string s, std::string t) {
    
    if(s.size() <= 0){return true;}
    long index(0);
    for(size_t p = 0; p < t.size(); p++){
        if(t[p] == s[index]){
            ++index;
            if(index >= s.size()){return true;}
        }
    }
    
    return false;
}

int main(){

    std::string s = "";
    std::string t = "ahbgdc";
    std::cout << isSubsequence(s, t) << std::endl;

    return 0;
}

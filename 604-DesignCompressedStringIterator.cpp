class StringIterator {
public:
    StringIterator(string compressedString) {
        s = compressedString;
        nxt = s.empty() ? ' ' : s[0];
        rem = 0; idx = 1;
        while(idx < s.size() && '0' <= s[idx] && s[idx] <= '9'){rem = 10 * rem + (s[idx++] - '0');}
    }
    
    char next() {
        char res = nxt;
        --rem;

        if(nxt != ' ' && !rem){
            if(idx == s.size()){nxt = ' ';}
            else{
                nxt = s[idx++];
                while(idx < s.size() && '0' <= s[idx] && s[idx] <= '9'){rem = 10 * rem + (s[idx++] - '0');}
            }
        }

        return res;   
    }
    bool hasNext() {return nxt != ' ';}

private:
    std::string s;
    char nxt;
    int idx, rem;
};

/**
 * Your StringIterator object will be instantiated and called as such:
 * StringIterator* obj = new StringIterator(compressedString);
 * char param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */

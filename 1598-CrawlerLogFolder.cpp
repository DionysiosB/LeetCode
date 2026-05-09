class Solution {
public:
    int minOperations(vector<string>& logs) {

        int cnt(0);
        for(std::string log : logs){
            if(log == "../"){--cnt;}
            else if(log != "./"){++cnt;}
            cnt = (cnt > 0 ? cnt : 0);
        }

        return cnt;
    }
};

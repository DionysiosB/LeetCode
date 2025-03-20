class Solution {
public:
    string findContestMatch(int n) {
        
        std::deque<std::string> dq;
        for(int p = 1; p < n + 1 - p; p++){
            std::string s = "(" + std::to_string(p) + "," + std::to_string(n + 1 - p) + ")";
            dq.push_back(s);
        }
        
        while(dq.size() > 1){
            std::deque<std::string> f(dq);
            dq.clear();
            while(!f.empty()){
                std::string a = f.front(); f.pop_front();
                std::string b = f.back(); f.pop_back();
                dq.push_back("(" + a + "," + b + ")");   
            }
        }
 
        return dq.back();
    }
};

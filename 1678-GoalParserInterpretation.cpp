class Solution {
public:
    string interpret(string command) {
        long idx(0);
        std::string res("");
        while(idx < command.size()){
            if(command[idx] == 'G'){res += "G"; ++idx;}
            else if(command[idx] == '(' && command[idx + 1] == ')'){res += "o"; idx += 2;}
            else if(command[idx] == '(' && command[idx + 1] == 'a'){res += "al"; idx += 4;}
        }
        return res;
        
    }
};

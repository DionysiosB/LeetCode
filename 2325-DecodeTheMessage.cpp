class Solution {
public:
    string decodeMessage(string key, string message) {

        std::map<char, char> mk;
        char c('a');
        for(int p = 0; p < key.size(); p++){
            if(key[p] == ' ' || mk.count(key[p])){continue;}
            mk[key[p]] = c++;
        }

        for(int p = 0; p < message.size(); p++){
            if(message[p] == ' '){continue;}
            message[p] = mk[message[p]];
        }

        return message;
    }
};

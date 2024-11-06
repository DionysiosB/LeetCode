class Logger {
public:
    Logger() {  }
    bool shouldPrintMessage(int timestamp, string message) {
        for(std::map<std::string, int>::iterator it = prev.begin(); it != prev.end(); it++){
            std::string key = it->first;
            int time = it->second;
            if(key == message && time + 10 > timestamp){return false;}
        }

        for(std::map<std::string, int>::iterator it = prev.begin(); it != prev.end();){
            int time = it->second;
            if(time + 10 <= timestamp){prev.erase(it++);}
            else{it++;}
        }

        prev.insert(std::make_pair(message, timestamp));
        return true;
    }

    std::map<std::string, int> prev;
};

/**
 * Your Logger object will be instantiated and called as such:
 * Logger* obj = new Logger();
 * bool param_1 = obj->shouldPrintMessage(timestamp,message);
 */

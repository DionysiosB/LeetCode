class TimeMap {
public:
    TimeMap() {m = std::unordered_map<std::string, std::map<int, std::string> >();}
    void set(string key, string value, int timestamp) {m[key][timestamp] = value;}
    string get(string key, int timestamp) {
        if(!m.count(key)){return "";}
        std::map<int, std::string> km = m[key];
        if(timestamp < km.begin()->first){return "";}
        else{
            std::map<int, std::string>::iterator it = km.upper_bound(timestamp);
            return (--it)->second;
        }

        
    }

private:
    std::unordered_map<std::string, std::map<int, std::string> > m;
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */

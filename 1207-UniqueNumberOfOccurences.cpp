class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        std::map<int, int> cm;
        for(int p = 0; p < arr.size(); p++){++cm[arr[p]];}
        std::set<int> cs;
        for(std::map<int, int>::iterator it = cm.begin(); it != cm.end(); it++){
            int f = it->second;
            if(cs.count(f)){return false;}
            cs.insert(f);
        }

        return true;
    }
};

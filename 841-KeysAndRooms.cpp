class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        int n = rooms.size();
        std::vector<bool> v(n, 0);
        std::set<int> keys;
        
        for(int p = 0; p < rooms[0].size(); p++){keys.insert(rooms[0][p]);}
        v[0] = 1;
        while(!keys.empty()){
            int key = *keys.begin();
            keys.erase(keys.begin());
            if(v[key]){continue;}
            v[key] = true;
            for(int p = 0; p < rooms[key].size(); p++){keys.insert(rooms[key][p]);}
        }
        
        for(int p = 0; p < n; p++){if(!v[p]){return false;}}
        return true;
    }
};

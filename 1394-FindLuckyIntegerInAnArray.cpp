class Solution {
public:
    int findLucky(vector<int>& arr) {
        std::map<int, int> f;
        for(int p = 0; p < arr.size(); p++){++f[arr[p]];}
        int lucky(-1);
        for(std::map<int, int>::iterator it = f.begin(); it != f.end(); it++){
            int key = it->first;
            int val = it->second;
            if(key == val && key > lucky){lucky = key;}
        }
        
        return lucky;
    }
};

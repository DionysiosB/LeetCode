class Solution {
public:
    int numTilePossibilities(string tiles) {

        std::map<char, int> m;
        for(int p = 0; p < tiles.size(); p++){++m[tiles[p]];}

        return dfs(m);
    }

private:
    int dfs(std::map<char, int> m){
        int cnt(0);
        for(std::map<char, int>::iterator it = m.begin(); it != m.end(); it++){
            int val = it->second;
            if(!val){continue;}
            it->second = val - 1;
            cnt += 1 + dfs(m);
            it->second = val;
        }

        return cnt;
    }
};

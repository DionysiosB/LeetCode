class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {

        long long cm(mass);
        sort(asteroids.begin(), asteroids.end());
        for(int p = 0; p < asteroids.size(); p++){
            if(cm < asteroids[p]){return false;}
            cm += asteroids[p];
        }
        
        return true;
    }
};

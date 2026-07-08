class Solution {
public:
    int connectSticks(vector<int>& sticks) {
        
        std::multiset<int> ms;
        for(int p = 0; p < sticks.size(); p++){ms.insert(sticks[p]);}

        int total(0);
        while(ms.size() > 1){
            int x = *ms.begin();
            ms.erase(ms.begin());
            int y = *ms.begin();
            ms.erase(ms.begin());
            total += (x + y);
            ms.insert(x + y);
        }

        return total;
    }
};

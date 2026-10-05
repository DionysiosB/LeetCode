class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        std::unordered_map<int, int> m;

        int left(0), cnt(0), total(0);
        for(int p = 0; p < fruits.size(); p++){
            while(m.size() >= 2 && !m.count(fruits[p])){
                int x = fruits[left];
                --m[x]; --cnt; ++left;
                if(!m[x]){m.erase(x);}
            }
            ++cnt; ++m[fruits[p]];
            total = std::max(total, cnt);
        }

        return total;
    }
};

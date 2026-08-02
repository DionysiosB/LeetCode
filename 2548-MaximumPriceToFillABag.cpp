class Solution {
public:
    double maxPrice(vector<vector<int>>& items, int capacity) {
        
        std::vector<std::pair<double, int> > v;
        for(int p = 0; p < items.size(); p++){
            v.push_back(std::make_pair(1.0 * items[p][0] / items[p][1], p));
        }

        sort(v.rbegin(), v.rend());

        double total(0);
        for(int p = 0; capacity > 0 && p < v.size(); p++){
            int idx = v[p].second;
            int price = items[idx][0];
            int weight = items[idx][1];
            if(capacity >= weight){total += price; capacity -= weight;}
            else{total += 1.0 * price * capacity / weight; capacity = 0; break;}
        }

        return capacity ? -1 : total;
    }
};

class Solution {
public:
    int maxPotholes(string road, int budget) {

        std::vector<int> v;

        int cnt(0);
        for(int p = 0; p < road.size(); p++){
            if(road[p] == '.'){
                if(cnt){v.push_back(cnt);}
                cnt = 0;
            }
            else{++cnt;}
        }

        if(cnt){v.push_back(cnt);}
        sort(v.rbegin(), v.rend());

        int total(0);
        for(int p = 0; budget > 0 && p < v.size(); p++){
            if(budget > v[p]){total += v[p]; budget -= (v[p] + 1);}
            else{total += (budget - 1); budget = 0; break;}
        }
        
        return total;

    }
};

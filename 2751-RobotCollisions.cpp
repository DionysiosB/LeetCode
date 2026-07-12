class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {

        const int n = positions.size();
        std::vector<std::pair<int, int> > v(n); 
        for(size_t p = 0; p < n; p++){
            v[p].first = positions[p];
            v[p].second = p;
        }

        sort(v.begin(), v.end());
        std::vector<int> rrv;

        for(size_t p = 0; p < v.size(); p++){
            int idx = v[p].second;
            if(directions[idx] == 'R'){rrv.push_back(idx); continue;}

            while(healths[idx] > 0 && !rrv.empty()){
                const int opp = rrv.back();
                if(healths[idx] > healths[opp]){--healths[idx]; healths[opp] = 0;}
                else if(healths[idx] == healths[opp]){healths[idx] = healths[opp] = 0;}
                else{--healths[opp]; healths[idx] = 0;}
                if(healths[opp] <= 0){rrv.pop_back();}
                else{break;}
            }
        }

        std::vector<int> res;
        for(int h : healths){if(h > 0){res.push_back(h);}}
        return res;
    }
};

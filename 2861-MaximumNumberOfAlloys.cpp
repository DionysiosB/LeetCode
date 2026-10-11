class Solution {
public:

    bool check(const std::vector<std::vector<int>>& composition, const std::vector<int>& stock, const std::vector<int>& cost, int budget, long long total){

        for(int p = 0; p < composition.size(); p++){
            std::vector<int> vn = composition[p];
            long long rem(budget);
            for(int u = 0; u < vn.size(); u++){
                long long need = total * vn[u] - stock[u];
                rem -= (need > 0) * need * cost[u];
                if(rem < 0){break;}
            }
            if(rem >= 0){return true;}
        }

        return false;
    }

    int maxNumberOfAlloys(int n, int k, int budget, vector<vector<int>>& composition, vector<int>& stock, vector<int>& cost) {

        int left(0), right(1e9), res(0);
        while(left <= right){
            int mid = (left + right) / 2;
            if(check(composition, stock, cost, budget, mid)){res = mid; left = mid + 1;}
            else{right = mid - 1;}
        }

        return res;
    }
};

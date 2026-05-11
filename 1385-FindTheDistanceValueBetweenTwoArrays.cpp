class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {

        int cnt(0);
        for(int x : arr1){
            bool cur(true);
            for(int y : arr2){
                if(std::abs(x - y) <= d){cur = false; break;}
            }
            cnt += cur;
        }

        return cnt;
    }
};

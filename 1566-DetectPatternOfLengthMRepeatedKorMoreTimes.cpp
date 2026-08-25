class Solution {
public:
    bool containsPattern(vector<int>& arr, int m, int k) {

        for(int p = 0; p + k * m <= arr.size(); p++){
            bool res(true);
            for(int q = p + m; q < p + k * m ; q++){
                if(arr[q] != arr[p + (q - p) % m]){res = false; break;}
            }
            if(res){return true;}
        }

        return false;
    }
};

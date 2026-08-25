class Solution {
public:
    vector<int> transformArray(vector<int>& arr) {

        bool chg(true);
        while(chg){
            chg = false;
            std::vector<int> v(arr);
            for(int p = 1; p + 1 < arr.size(); p++){
                if(arr[p - 1] > arr[p] && arr[p] < arr[p + 1]){++v[p] + 1; chg = true;}
                else if(arr[p - 1] < arr[p] && arr[p] > arr[p + 1]){--v[p]; chg = true;}
            }
            
            arr = v;
        }

        return arr;
    }
};

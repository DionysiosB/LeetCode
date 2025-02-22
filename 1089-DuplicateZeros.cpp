class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        std::vector<int> v;
        for(int p = 0; p < arr.size(); p++){
            v.push_back(arr[p]);
            if(v.size() >= n){break;}
            if(!arr[p]){v.push_back(0);}
            if(v.size() >= n){break;}
        }
        
        arr = v;
    }
};

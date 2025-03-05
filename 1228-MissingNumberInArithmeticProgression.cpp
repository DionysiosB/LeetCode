class Solution {
public:
    int missingNumber(vector<int>& arr) {      
        sort(arr.begin(), arr.end());
        int step = (arr.back() - arr[0]) / arr.size();
        if(step == 0){return arr.back();}
        for(int p = 1; p < arr.size(); p++){
            if(arr[p] == arr[p - 1] + step){continue;}
            return arr[p - 1] + step;
        }
        
        return 0;
    }
};

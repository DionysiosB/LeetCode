class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(arr.begin(), arr.end());
        sort(target.begin(), target.end());
        for(int p = 0; p < arr.size(); p++){
            if(arr[p] != target[p]){return false;}
        }
        return true;
    }
};

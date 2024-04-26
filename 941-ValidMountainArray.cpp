class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        bool inc(false), dec(false); int idx(1); 
        while(idx < arr.size() && arr[idx - 1] < arr[idx]){inc = true; ++idx;}
        while(idx < arr.size() && arr[idx - 1] > arr[idx]){dec = true; ++idx;}
        return inc && dec && idx == arr.size();
    }
};

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int mx(-1);
        for(int p = arr.size() - 1; p >= 0; p--){
            int nxt = (mx > arr[p] ? mx : arr[p]);
            arr[p] = mx;
            mx = nxt;
        }
        
        return arr;
    }
};

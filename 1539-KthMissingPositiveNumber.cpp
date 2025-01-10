class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        long prev(0);
        for(int p = 0; p < arr.size(); p++){
            int diff = arr[p] - prev - 1;
            if(k <= diff){return prev + k;}
            k -= diff;
            prev = arr[p];
        }
        
        return arr.back() + k;
    }
};

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        const int n = arr.size();
        int left(0), right(n - 1), res(-1);
        while(left <= right){
            int mid = (left + right) / 2;
            if(mid + 1 < n && arr[mid] < arr[mid + 1]){left = mid + 1;}
            else if(mid > 0 && arr[mid - 1] > arr[mid]){right = mid - 1;}
            else{return mid;}
        }
        
        return -1;
    }
};

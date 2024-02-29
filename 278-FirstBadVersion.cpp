// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {

        unsigned int left(1), right(n), res(1);
        while(left <= right){
            int mid = (left + right) / 2;
            if(isBadVersion(mid)){res = mid; right = mid - 1;}
            else{left = mid + 1;}
        }

        return res;
        
    }
};

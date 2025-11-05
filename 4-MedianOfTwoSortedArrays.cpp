class Solution {
public:
    double findMedianSortedArrays(vector<int>& va, vector<int>& vb) {
        if (va.size() > vb.size()){return findMedianSortedArrays(vb, va);}
        const int sa = va.size();
        const int sb = vb.size();
        int left = 0, right = sa;
        while (left <= right) {
            int mid  = (left + right) / 2;
            int rem  = (sa + sb + 1) / 2 - mid;

            int leftA  = mid        ? va[mid - 1] : INT_MIN;
            int rightA = (mid < sa) ? va[mid]     : INT_MAX;
            int leftB  = rem        ? vb[rem - 1] : INT_MIN;
            int rightB = (rem < sb) ? vb[rem]     : INT_MAX;

            if (leftA <= rightB && leftB <= rightA) {
                if ((sa + sb) % 2 == 0) {return (std::max(leftA, leftB) + std::min(rightA, rightB)) / 2.0;}
                else{ return max(leftA, leftB);}
            }
            if (leftA > rightB){right = mid - 1;}
            else{left = mid + 1;}
        }

        return 0.0;
    }
};

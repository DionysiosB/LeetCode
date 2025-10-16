class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int a(0); for(int p = 0; p < left.size(); p++){a = (a > left[p] ? a : left[p]);}
        int b(n); for(int p = 0; p < right.size(); p++){b = (b < right[p] ? b : right[p]);}
        b = n - b;
        return (a > b ? a : b);
    }
};

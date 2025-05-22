class Solution {
public:
    int maxArea(vector<int>& h) {
        int n = h.size();
        int left(0), right(n - 1);
        int mx(0);

        while(left < right){
            int cur = (right - left) * (h[left] < h[right] ? h[left] : h[right]);
            mx = (mx > cur ? mx : cur);
            if(h[left] < h[right]){++left;}
            else{--right;}
        }

        return mx;
    }
};

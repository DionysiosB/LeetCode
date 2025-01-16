class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        long left(0); while(left < n && colors[left] == colors.back()){++left;}
        int right(n - 1); while(right >= 0 && colors[right] == colors[0]){--right;}
        int dist = n - 1 - left;
        dist = (dist > right ? dist : right);
        return dist;
    }
};

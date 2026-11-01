class Solution {
public:
    long long maxCaloriesBurnt(vector<int>& heights) {

        long long total(0);
        sort(heights.rbegin(), heights.rend());
        long long prev(0), left(0), right(heights.size()), idx(0);
        while(left < right){
            total += (heights[idx] - prev) * (heights[idx] - prev);
            prev = heights[idx];
            idx = (idx == left) ? (--right) : (++left);
        }

        return total;
    }
};

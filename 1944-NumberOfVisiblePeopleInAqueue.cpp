class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {


        std::stack<int> s;
        std::vector<int> v(heights.size());

        for(int p = heights.size() - 1; p >= 0; p--){
            int cnt(0);
            while(!s.empty() && s.top() < heights[p]){s.pop(); ++cnt;}
            v[p] = cnt + 1 - s.empty();
            s.push(heights[p]);
        }

        return v;
    }
};

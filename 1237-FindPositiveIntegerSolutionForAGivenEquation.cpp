/*
 * // This is the custom function interface.
 * // You should not implement it, or speculate about its implementation
 * class CustomFunction {
 * public:
 *     // Returns f(x, y) for any given positive integers x and y.
 *     // Note that f(x, y) is increasing with respect to both x and y.
 *     // i.e. f(x, y) < f(x + 1, y), f(x, y) < f(x, y + 1)
 *     int f(int x, int y);
 * };
 */

class Solution {
public:
    vector<vector<int>> findSolution(CustomFunction& cf, int z) {

        std::vector<std::vector<int> > ans;
        for(int x = 1; x <= 1000; x++){
            if(cf.f(x, 1) > z){break;}
            for(int y = 1; y <= 1000; y++){
                if(cf.f(x, y) > z){break;}
                else if(cf.f(x, y) == z){
                    std::vector<int> v(2); v[0] = x; v[1] = y; ans.push_back(v);
                }
            }
        }

        return ans;
    }
};

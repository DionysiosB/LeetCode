class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        std::vector<double> ans{celsius + 273.15, celsius * 1.80 + 32.0};
        return ans;
    }
};

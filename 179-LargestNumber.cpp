class Solution {
    
public:

    static bool comp(std::string a, std::string b){return (a + b) < (b + a);}
    
    std::string largestNumber(vector<int>& nums) {
        std::vector<std::string> v(nums.size());
        for(int p = 0; p < nums.size(); p++){v[p] = std::to_string(nums[p]);}
        sort(v.begin(), v.end(), comp);
        
        std::string res("");
        for(int p = v.size() - 1; p >= 0; p--){res += v[p];}

        if (res[0]=='0') return "0";

        return res;   
    }
};

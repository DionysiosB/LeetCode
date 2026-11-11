class Solution {
public:
    int maximumSum(vector<int>& nums) {

        std::multiset<int, std::greater<int> > zeros, ones, twos;
        for(int x : nums){
            if(x % 3 == 0){zeros.insert(x); if(zeros.size() > 3){zeros.erase(std::prev(zeros.end()));}}
            else if(x % 3 == 1){ones.insert(x); if(ones.size() > 3){ones.erase(std::prev(ones.end()));}}
            else if(x % 3 == 2){twos.insert(x); if(twos.size() > 3){twos.erase(std::prev(twos.end()));}}
        }

        int ans(0), total(0);
        if(!zeros.empty() && !ones.empty() && !twos.empty()){ans = *zeros.begin() + *ones.begin() + *twos.begin();}
        if(zeros.size() == 3){total = 0; for(int x : zeros){total += x;}; ans = (ans > total ? ans : total);}
        if(ones.size() == 3){total = 0; for(int x : ones){total += x;}; ans = (ans > total ? ans : total);}
        if(twos.size() == 3){total = 0; for(int x : twos){total += x;}; ans = (ans > total ? ans : total);}
        return ans;
    }
};

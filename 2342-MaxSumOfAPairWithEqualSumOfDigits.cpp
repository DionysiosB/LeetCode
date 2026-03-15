class Solution {
public:

    int sumOfDigits(int x){
        int s(0);
        while(x){s += (x % 10); x /= 10;}
        return s;
    }

    int maximumSum(vector<int>& nums) {
        std::map<int, std::multiset<int> > m;
        for(int p = 0; p < nums.size(); p++){
            const int x = nums[p];
            const int sd = sumOfDigits(x);
            m[sd].insert(x);
            if(m[sd].size() > 2){m[sd].erase(m[sd].begin());}
        }

        int ans(-1);
        for(std::map<int, std::multiset<int> >::iterator it = m.begin(); it != m.end(); it++){
            int key = it->first;
            std::multiset<int> ms = it->second;
            if(ms.size() < 2){continue;}
            int cs = *(ms.begin()) + *(ms.rbegin());
            ans = (ans > cs ? ans : cs);
        }

        return ans;
    }

};

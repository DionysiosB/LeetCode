class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {

        std::unordered_set<int> s;
        for(int p = 0; p < friends.size(); p++){s.insert(friends[p]);}

        std::vector<int> v;
        for(int p = 0; p < order.size(); p++){
            if(!s.count(order[p])){continue;}
            v.push_back(order[p]);
        }

        return v;
    }
};

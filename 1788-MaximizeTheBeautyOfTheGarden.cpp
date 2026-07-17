class Solution {
public:
    int maximumBeauty(vector<int>& flowers) {

        int cs(0), res(-1e8);
        std::map<int, int> m;
        for(int flower : flowers){
            if(!m.count(flower)){m[flower] = cs;}
            else{
                int tst = cs - m[flower] + (1 + (flower < 0)) * flower;
                res = (res > tst ? res : tst);
            }
            cs += (flower > 0 ? flower : 0);
        }

        return res;
    }
};

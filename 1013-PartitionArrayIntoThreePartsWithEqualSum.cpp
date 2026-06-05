class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {

        int sum(0); for(int x : arr){sum += x;}
        if(sum % 3){return false;}

        int target = sum / 3;
        int cs(0), cnt(0);
        for(int x: arr){
            cs += x;
            if(cs == target){cs = 0; ++cnt;}
            if(cnt >= 3){return true;}
        }
        return false;
    }
};

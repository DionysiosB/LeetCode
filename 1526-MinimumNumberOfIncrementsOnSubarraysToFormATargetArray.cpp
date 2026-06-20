class Solution {
public:
    int minNumberOperations(vector<int>& target) {

        int prev(0), total(0);
        for(int x : target){
            if(x > prev){total += (x - prev);}
            prev = x;
        }

        return total;
        
    }
};

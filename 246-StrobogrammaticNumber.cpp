class Solution {
public:
    bool isStrobogrammatic(string num) {
        
        for(int p = 0; p < num.size(); p++){
            if((num[p] == '8' || num[p] == '0' || num[p] == '1') && (num[p] == num[num.size() - 1 - p])) {continue;}
            else if(num[p] == '6' && num[num.size() - 1 - p] == '9'){continue;}
            else if(num[p] == '9' && num[num.size() - 1 - p] == '6'){continue;}
            else{return false;}
        }
        
        return true;
    }
};

class Solution {
public:
    bool isLongPressedName(string name, string typed) {

        if(name[0] != typed[0] || name.size() > typed.size()){return false;}
        int idx(1);
        for(int p = 1; p < typed.size(); p++){
            if(idx < name.size() && name[idx] == typed[p]){++idx;}
            else if(typed[p] == typed[p - 1]){continue;}
            else{return false;}
        }

        if(idx < name.size()){return false;}
        return true;
    }
};

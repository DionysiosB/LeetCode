class Solution {
public:
    bool validWordSquare(vector<string>& words) {
        for(int row = 0; row < words.size(); row++){
            for(int col = 0; col < words[row].size(); col++){
                if(col >= words.size()){return false;}
                if(row >= words[col].size()){return false;}
                if(words[row][col] != words[col][row]){return false;}
            }
        }
        
        return true;
    }
};

class Solution {
public:

    bool mixed(std::vector<int> a, std::vector<int> b){
        bool same(false), diff(false);
        for(int p = 0; p < a.size(); p++){
            if(a[p] == b[p]){same = true;}
            else{diff = true;}
        }

        return same && diff;
    }

    bool removeOnes(vector<vector<int>>& grid) {
        //All rows have to be either the same or the exact opposite to each other;
        for(size_t row = 1; row < grid.size(); row++){
            if(mixed(grid[0], grid[row])){return false;}
        }
        return true;
    }

    //Algorithm: Go through all cells left to right, top to bottom
    //If there is an 1 in the first row, flip the column
    //Then, if subsequent rows have an 1, it is either flipping the row or it's not possible
    //Which proves that the row is either all zeros or all ones

};

/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int row, int col);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {

        std::vector<int> dims = binaryMatrix.dimensions();
        int nrow = dims[0];
        int ncol = dims[1];

        int col(ncol - 1);
        for(int row = 0; row < nrow; row++){
            while(col >= 0 && binaryMatrix.get(row, col) == 1){--col;}
        }

        return (col == ncol - 1) ? -1 : (1 + col);
        
    }
};

class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int x = (k < numOnes ? k : numOnes); int s(x); k -= x;
        x = (k < numZeros ? k : numZeros); k -= x;
        x = (k < numNegOnes ? k : numNegOnes); s -= x; 
        return s;
    }
};

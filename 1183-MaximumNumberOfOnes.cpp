class Solution {
public:
    int maximumNumberOfOnes(int width, int height, int sideLength, int maxOnes) {

        std::vector<int> v;
        for(int row = 0; row < sideLength; row++){
            for(int col = 0; col < sideLength; col++){
                v.push_back((1 + (width - col - 1)/sideLength) * (1 + (height - row - 1)/sideLength));
            }
        }

        sort(v.rbegin(), v.rend());
        int total(0); for(int p = 0; p < maxOnes; p++){total += v[p];}
        return total;
    }
};

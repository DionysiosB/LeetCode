class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {

        const int nc = image[0].size();
        for(int row = 0; row < image.size(); row++){
            for(int col = 0; col <= nc - 1 - col; col++){
                if(image[row][col] ^ image[row][nc - 1 - col]){continue;}
                int val = 1 - image[row][col];
                image[row][col] = image[row][nc - 1 - col] = val;
            }
        }
        
        return image;
    }
};

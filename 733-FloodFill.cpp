class Solution {
public:

    void dfs(int row, int col, std::vector<std::vector<int> > &img, std::vector<std::vector<bool> > &vis, int prev, int nc){
        if(row < 0 || row >= img.size() || col < 0 || col >= img[row].size()){return;}
        if(img[row][col] != prev){return;}
        if(vis[row][col]){return;}
        vis[row][col] = true;
        img[row][col] = nc;
        dfs(row - 1, col, img, vis, prev, nc);
        dfs(row + 1, col, img, vis, prev, nc);
        dfs(row, col - 1, img, vis, prev, nc);
        dfs(row, col + 1, img, vis, prev, nc);

        return;
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        std::vector<std::vector<bool> > visited(image.size(), std::vector<bool>(image[0].size()));
        dfs(sr, sc, image, visited, image[sr][sc], color);
        return image;
    }
};

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
         int originalColor = image[sr][sc];
        if (originalColor != newColor) {
            floodFillHelper(image, sr, sc, originalColor, newColor);
        }
        return image;
    }
    void floodFillHelper(vector<vector<int>>& image, int row, int col, int originalColor, int newColor) {
        // Base case: Check if the current pixel is within the bounds and has the original color
        if (row < 0 || row >= image.size() || col < 0 || col >= image[0].size() || image[row][col] != originalColor) {
            return;
        }

        // Change the color of the current pixel to the new color
        image[row][col] = newColor;

        // Recursively perform flood fill on neighboring pixels
        floodFillHelper(image, row + 1, col, originalColor, newColor);  // Down
        floodFillHelper(image, row - 1, col, originalColor, newColor);  // Up
        floodFillHelper(image, row, col + 1, originalColor, newColor);  // Right
        floodFillHelper(image, row, col - 1, originalColor, newColor);  // Left
    }
};
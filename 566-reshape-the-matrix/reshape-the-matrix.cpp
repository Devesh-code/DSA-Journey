class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
         // Check for validity
    int originalRows = mat.size();
    int originalCols = mat[0].size();
    if (originalRows * originalCols != r * c) {
        return mat;  // Reshape not possible, return the original matrix
    }

    // Reshape the matrix
    vector<vector<int>> reshaped(r, vector<int>(c, 0));
    for (int i = 0; i < originalRows * originalCols; ++i) {
        reshaped[i / c][i % c] = mat[i / originalCols][i % originalCols];
    }

    return reshaped;
    }
};
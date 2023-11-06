class Solution {
public:
    vector<int> getRow(int rowIndex) {
          vector<int> res = {1}; // Initialize the result with the first row containing one element.

    // Iterate from the second row up to the specified rowIndex.
    for (int i = 0; i < rowIndex; i++) {
        vector<int> nextRow(res.size() + 1, 0); // Create a new row with one more element than the previous row.

        // Calculate the values for the new row.
        for (int j = 0; j < res.size(); j++) {
            nextRow[j] += res[j]; // Update the current element in the new row with the value from the previous row.
            nextRow[j + 1] += res[j]; // Update the next element in the new row with the value from the previous row.
        }

        res = nextRow; // Update the result to the newly generated row.
    }

    return res; // Return the rowIndex-th row of Pascal's Triangle.
    }
};
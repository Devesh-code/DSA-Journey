class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<pair<int, int>> scoreWithIndex;

        // Create a vector of pairs to store scores along with their original indices
        for (int i = 0; i < n; ++i) {
            scoreWithIndex.push_back({score[i], i});
        }

        // Sort the vector of pairs in descending order based on scores
        sort(scoreWithIndex.rbegin(), scoreWithIndex.rend());

        // Create a vector to store ranks, initialized with an empty string
        vector<string> result(n, "");

        // Assign ranks based on positions
        for (int i = 0; i < n; ++i) {
            if (i == 0) {
                result[scoreWithIndex[i].second] = "Gold Medal";
            } else if (i == 1) {
                result[scoreWithIndex[i].second] = "Silver Medal";
            } else if (i == 2) {
                result[scoreWithIndex[i].second] = "Bronze Medal";
            } else {
                result[scoreWithIndex[i].second] = to_string(i + 1);
            }
        }

        return result;
    }
};
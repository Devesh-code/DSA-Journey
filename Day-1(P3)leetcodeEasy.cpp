class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> res;
        if (numRows <= 0) {
            return res;
        }
        9

        res.push_back({1});
        for (int i = 1; i < numRows; i++) {
            const std::vector<int>& prev = res.back();
            std::vector<int> row;
            row.push_back(1);

            for (int j = 1; j < prev.size(); j++) {
                row.push_back(prev[j - 1] + prev[j]);
            }

            row.push_back(1);
            res.push_back(row);
        }

        return res;





    }
};
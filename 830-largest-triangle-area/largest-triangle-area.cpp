class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
     double maxArea = 0.0;
        int n = points.size();

        for (int i = 0; i < n - 2; ++i) {
            for (int j = i + 1; j < n - 1; ++j) {
                for (int k = j + 1; k < n; ++k) {
                    double area = calculateArea(points[i], points[j], points[k]);
                    maxArea = max(maxArea, area);
                }
            }
        }

        return maxArea;
    }

private:
    double calculateArea(const vector<int>& p1, const vector<int>& p2, const vector<int>& p3) {
        return 0.5 * abs(p1[0] * (p2[1] - p3[1]) + p2[0] * (p3[1] - p1[1]) + p3[0] * (p1[1] - p2[1]));   
    }
};
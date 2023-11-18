class Solution {
public:
    vector<int> constructRectangle(int area) {
       int x = sqrt(area);
      while (area % x != 0) {
         x--;
      }
      return {area / x, x};
    }
};
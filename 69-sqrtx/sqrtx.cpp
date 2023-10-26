class Solution {
public:
    int mySqrt(int x) {
      int sqr;
      if (x < 0){
          return 0;
      }  
      sqr = sqrt(x);
      return sqr;
    }
};
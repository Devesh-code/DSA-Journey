class Solution {
public:
    int addDigits(int num) {
      int tot = 0;
      if (num <=9) return num;
      
      while(num > 0){
          tot += num % 10;
          num = num / 10;
      }  
      return addDigits(tot);
    }
};
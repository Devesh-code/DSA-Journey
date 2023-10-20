#include <iostream>
using namespace std;
class Solution {
public:
    bool isPowerOfThree(int n) {
    if (n <=0 )
    {
        cout<<"False";
    }  
    else if(n % 3 == 0)
    {
        cout<<"True";
    }
    else
    {
    cout<<"False";
    }
    }
};
int main() 
{
  Solution s;
  s.isPowerOfThree(27);
  return 0;
}
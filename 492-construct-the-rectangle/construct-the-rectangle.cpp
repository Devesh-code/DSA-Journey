class Solution {
public:
    vector<int> constructRectangle(int area) {
        
    int x = sqrt(area);

    while (true) {
   
    int y = area / x;

    
    if (area % x == 0) {
        if (x > y){
            return {x,y};
        }
     else {
        return {y, x};
    }
    }
    x++;
}

    }
};
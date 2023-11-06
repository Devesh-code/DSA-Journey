class Solution {
public:
    int climbStairs(int n) {
       // If n is 1, return 1, as there is only one way to climb one step.
    if (n == 1) return 1;
    
    // Initialize a vector 'steps' with 'n + 1' elements to store the number of ways to reach each step.
    vector<int> steps(n + 1);

    // Initialize the base cases for the first two steps.
    steps[1] = 1; // There is one way to reach the first step.
    steps[2] = 2; // There are two ways to reach the second step: (1 step + 1 step) or (2 steps).

    // Calculate the number of ways to reach each step from the third step up to 'n'.
    for (int i = 3; i <= n; i++) {
        steps[i] = steps[i - 1] + steps[i - 2];
    }

    // Return the number of ways to reach the 'n'-th step, which is stored in 'steps[n]'.
    return steps[n];
    }
};
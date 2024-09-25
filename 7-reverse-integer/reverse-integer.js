/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    let max = 2147483647; // Max value of 32-bit integer (2^31 - 1)
    let min = -2147483648; // Min value of 32-bit integer (-2^31)

    let result = 0;
    let sign = x < 0 ? -1 : 1; // Store the sign
    x = Math.abs(x); // Work with the absolute value

    while (x > 0) {
        let digit = x % 10; // Get the last digit
        result = result * 10 + digit; // Update the result by shifting and adding the digit
        x = Math.floor(x / 10); // Remove the last digit from x
    }

    // Restore the sign and check 32-bit range overflow
    result *= sign;
    if (result < min || result > max) return 0;

    return result;

};
/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    
    let cpy = String(x);
    let reversed = [...cpy].reverse().join('');

    reversed = parseInt(reversed);
    if(reversed === x)
    {
        return true;
    } else{
        return false;
    }

    
};
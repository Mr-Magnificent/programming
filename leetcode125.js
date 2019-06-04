/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function (s) {
    var reg = /\W/g;
    var p = s.replace(reg, "").toLowerCase();
    p = p.toLowerCase();
    var len = p.length;
    for(var i = 0, j = len - 1; i < len / 2; i++, j--) {
        if (p[i] != p[j]) {
            return false;
        }
    }
    return true;
};

console.log(isPalindrome("race a car"));
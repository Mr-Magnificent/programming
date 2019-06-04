/**
 * @param {number} x
 * @return {number}
 */
var mySqrt = function (x) {
    let x1 = x, x2;
    do {
        x2 = x1;
        x1 = (x1 + x/x1) / 2;
    } while (Math.abs(x1 - x2) >= 1);
    return Math.floor(x1) || 0;
};

console.log(mySqrt(process.argv[2]));

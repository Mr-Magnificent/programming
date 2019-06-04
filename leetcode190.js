/**
 * @param {number} n - a positive integer
 * @return {number} - a positive integer
 */
var reverseBits = function (n) {
    rep = n.toString(2);
    console.log(rep);
    rep = rep.split("").reverse().join("");
    return parseInt(rep, 2);
};

console.log(reverseBits(parseInt(process.argv[2], 2)));
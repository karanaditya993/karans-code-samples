/**
 * @param {string} s
 * @return {number}
 *
 *
 * Pseudocode:
 * "babld"
 * "racecar"
 * "cbbd"
 * Start at middle, expand
 *  If the char at left point is the same as char at right point
 *  Add to palindrome arr
 **/

var longestPalindrome = function(s) {
    let left = s.length % 2  === 0 ? s.length / 2 - 1 : Math.round(s.length/2) -1 ;
    let right = s.length % 2  === 0 ? s.length / 2 - 1: Math.round(s.length/2) - 1;
    const arr = [];

    if (s.length % 2 > 0) { //  odd
        arr.push(s.charAt(left));
        left--;
        right++;
    }

    while (s.charAt(left) === s.charAt(right) && left >= 0 && right <= s.length) {
        arr.push(s.charAt(left));
        arr.unshift(s.charAt(right));
        left--;
        right++;
    }
    return arr.join('');
};

console.log(longestPalindrome('bababd'));

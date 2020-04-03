/**
 * @param {string} s
 * @return {number}
 */

var lengthOfLongestSubstring = function(s) {
    let first_pointer = 0;
    let second_pointer = 0;
    let max = 0;
    let set = new Set();

    while (second_pointer < s.length) {
        if (!set.has(s.charAt(second_pointer))) {
            set.add(s.charAt(second_pointer));
            second_pointer++;
            max = Math.max(set.size, max);
        } else {
            set.delete(s.charAt(first_pointer));
            first_pointer++;
        }
    }
    return max;
};

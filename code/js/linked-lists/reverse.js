/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 *
 */


const list1 = {
     val: 2,
     next: {
         val: 4,
         next: {
             val: 3,
             next: null,
         }
     }
 };

const list2 = {
    val: 5,
    next: {
        val: 6,
        next: {
            val: 4,
            next: {
                val: 3,
                next: null,
            },
        }
    }
};

// iterative
// O(n) time --> have to traverse the entire linked list
// O(1) space --> no function callstack
function reverseIterative(head) {
    let prev = null;
    let curr = head;
    let next = null;
    while (curr !== null) {
        next = curr.next;
        curr.next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

// recursive
// O(n) time --> have to traverse the entire linked list
// O(1) space --> function callstack for recursion
function reverseRecurse(head) {
    if (!head || !head.next) {
        return head;
    }
    const tmp = reverseRecurse(head.next);
    head.next.next = head;
    head.next = null;
    return tmp;
}

// console.log(reverseIterative(list));
// console.log(reverseRecurse(list));

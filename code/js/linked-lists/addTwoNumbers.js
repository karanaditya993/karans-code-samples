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

var addTwoNumbers = function(l1, l2) {
    let carryOver = 0;
    let head = new ListNode();
    let node = head;

    // iterate through lists
    while (l1 || l2) {
        const l1Value = l1  && l1.val ? l1.val : 0;
        const l2Value = l2 && l2.val ? l2.val : 0;
        let sum = l1Value + l2Value + carryOver;
        carryOver = 0;
        if (sum > 9) {
            sum = sum % 10;
            carryOver = 1;
        }
        node.val = sum;
        if ((l1 && l1.next) || (l2 && l2.next)) {
            node.next = new ListNode();
            node = node.next;
        }
        l1 = l1 && l1.next ? l1.next : null;
        l2 = l2 && l2.next ? l2.next : null;
    }
    return head;
};

// console.log(addTwoNumbers(l1, l2)

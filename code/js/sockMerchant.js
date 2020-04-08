// Complete the sockMerchant function below.
function sockMerchant(n, ar) {
    const hashMap = {};
    let pairCount = 0;
    // find pairs
    ar.forEach((val) => {
        if (hashMap[val]) {
            hashMap[val] += 1;
        } else {
            hashMap[val] = 1;
        }
    });
    Object.values(hashMap).forEach((val) => {
        if (Math.floor(val / 2) >= 1) {
            pairCount += Math.floor(val / 2);
        }
    });
    return pairCount;
}

sockMerchant(9, [10,20,20,10,10,30,50,10,20]);

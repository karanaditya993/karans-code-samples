function countingValleys(n, s) {
    let alt = 0;
    let numVal = 0;
    s.split('').forEach((dir, idx, arr) => {
        if (dir === 'U') {
            alt += 1;
        } else {
            alt -= 1;
        }
        if (arr[idx - 1] === 'U' && alt < 0) {
            numVal++;
        }
    });
}

countingValleys(8, 'UDDDUDUU');

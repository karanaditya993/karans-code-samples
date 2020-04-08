function MakeChange(purchaseInfo) {
    let calculate = true;
    const changeDenoms = [100, 50, 20, 10, 5, 2, 1, 0.5, 0.25, 0.10, 0.05, 0.01];
    const changeMapper = {
        '0.01': 'PENNY',
        '0.0.5': 'NICKEL',
        '0.10': 'DIME',
        '0.25': 'QUARTER',
        '0.50': 'HALF DOLLAR',
        '1.00': 'ONE',
        '2.00': 'TWO',
        '5.00': 'FIVE',
        '10': 'TEN',
        '20': 'TWENTY',
        '50': 'FIFTY',
        '100': 'ONE HUNDRED',
    };


    let changeQuantityTracker = {};
    const purchasePrice = Number(purchaseInfo.split(';')[0]);
    const cashGiven = Number(purchaseInfo.split(';')[1]);

    if (isNaN(purchasePrice) || isNaN(cashGiven)) {
        throw new Error;
        return;
    }
    if (cashGiven < purchasePrice) {
        return 'ERROR';
    }
    if (cashGiven === purchasePrice) {
        return 'ZERO';
    }

    function calculateChange(denoms, change) {
        if (!denoms.length) {
            return false;
        }

        while (calculate &&  typeof calculate !== 'object') {
            let denominations = denoms || changeDenoms;
            change = change || cashGiven - purchasePrice;
            let count = 0;
            denominations.forEach((denom, idx) => {
                if (change / denom > 1) {
                    changeQuantityTracker[denom] = ++count;
                    calculate = calculateChange(denominations.splice(idx + 1), change - denom);
                }
            });
        }
        return changeQuantityTracker;
    }

    changeQuantityTracker = calculateChange(changeDenoms);
    let output = '';
    Object.keys((changeQuantityTracker)).forEach((key) => {
        output += `${changeMapper[key]},`;
    });
    console.log(output);
}

console.log(MakeChange('15.94;16.00'));

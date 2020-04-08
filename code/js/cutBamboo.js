let output = [];

function cutBamboo(lengths) {
    if (lengths.length === 0) { // recurse basecase
        return;
    }

    while (lengths.length !== 0) {
        output.push(lengths.length); // keep track of length of input

        const shortest = Math.min.apply(null, lengths); // find the shortest length
        const excludingShortest = lengths.filter((val) => { // create a new array with shortest length excluded
            return val !== shortest
        }).map((val) => {
            return val - shortest;
        });
        cutBamboo(excludingShortest); // recurse using the new array
    }
    return output;
}

cutBamboo([5, 4, 4, 2, 2, 8]);

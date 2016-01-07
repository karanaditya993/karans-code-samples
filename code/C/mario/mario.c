#include <cs50.h>
#include <stdio.h>

// APOLOGIES IN ADVANCE FOR THE NOTES AT THE BOTTOM...THEY HELPED ME UNDERSTAND
// THE LOOPING CONSTRUCTS BETTER AND FOLLOW THE CODE THAT I WAS WRITING

int main(void) {
    int height;
    int row;
    string hash = "#";
    string space = " ";

    do {
        printf("Height: ");
        height = GetInt();
    }
    while (height < 0 || height > 23);
    
    for (row=1; row <= height; row ++) {
        for (int j=0; j < height - row; j ++) {
            printf("%s", space);
        }
        for (int k=0; k < row + 1; k++){
            printf("%s", hash);
        }
        printf("\n");
    }
}
    
    // Suppose our height is 8. We would want the first for to have 7 spaces and
    // 2 hashes, the second row to have 6 spaces and 3 hashes, the third row to 
    // have 5 spaces and 4 hashes...etc.
    
    // This pattern shows that since the height is eight, the count of spaces 
    // and hashes on each row will need to be one more than the height, and the
    // rows will need to match up to the height 

    // For loops work in this way:
    // for (initialization; condition; update) {
        // code can only be executed if the condition is met 
    // }
    // We need to have nested for loops here because we need to account for the 
    // rows being printed, the spaces being printed, and the hashes being printed
    
    // Let's begin with the for loop that we will enter in order to print the rows
    // We'll start with row 1
    
    // If the row meets the condition that it is less than the height of the
        // pyramid, then we move on to the next loop. If it does not meet the
        // condition, we will exit out of this parent for loop and the program
        // will end.
        
        // The next for loop will print the spaces
        // If our height is 8, we want the first row to have 7 spaces and 2
            // hashes. Once we break out of the space for loop and hash for loop, 
            // the row will be incremented from the first for loop, thereby changing 
            // the constraint of the subsequent for loops, which is what we want!
            
        // Bare in mind that row is constantly going to increment until it gets
        // to the height of the pyramid...therefore the condition inside both the
        // spaces loop and hash loop will change
        
        // The final printf new line is the interior code that will be executed
        // for the first for loop. This will stop once the row increment reaches
        // the height of the pyramid input 
    

    
    
import java.util.*;

// Array must be sorted beforehand

class BinarySearch {
  public static void main(String[] args) {
    // declare integer variables that will be used
    int low, high, middle, n, search, array[];

    // Get user input for elements in array
    Scanner in = new Scanner(System.in);
    System.out.println("Enter a number of elements: ");
    n = in.nextInt();
    array = new int[n];
    System.out.println("Enter " + n + " integers: ");
    for (int c = 0; c < n; c++) {
      array[c] = in.nextInt();
    }
    // Get user input for value to find
    System.out.println("Enter value to find: ");
    search = in.nextInt();

    low = 0;
    high = n-1;
    middle = low + ((high - low)/2);
    while (low <= high) {
      if ( array[middle] < search )
       low = middle + 1;
     else if ( array[middle] == search )
     {
       System.out.println(search + " found at location " + (middle + 1) + ".");
       break;
     }
     else
        high = middle - 1;

     middle = (low + high)/2;
    }
    if ( low > high )
     System.out.println(search + " is not present in the list.\n");
  }
}

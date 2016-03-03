public class BinarySearch {
  public static void main(String[] args) {

  }

  // merge sort arraylist
  public static ArrayList<String> mergeSort(ArrayList<String> list) {
    // Declare left half and right half empty arraylists and keep track of
    // the center of the list
    ArrayList<String> left = new ArrayList<String>();
    ArrayList<String> right = new ArrayList<String>();
    int center;
    // If the list is only one element long, it is already sorted
    // Else take note of the center, and add the left and right halves
    // of the input arraylist to the left and right new arraylists
    if(list.size()==1) {
      return list;
    }
    else {
      center = list.size()/2;
      for(int i = 0; i < center; i++) {
        left.add(list.get(i));
      }
      for(int i = 0, n = list.size(); i < n; i++) {
        right.add(list.get(i));
      }
      // sort the left and right halves
      left = mergeSort(left);
      right = mergeSort(right);
      // merge
      merge(left, right, list);
    }
    return list;
  }
  private void merge(ArrayList<String> left, ArrayList<String> right, ArrayList<String> whole) {
    int leftIndex = 0;
    int rightIndex = 0;
    int wholeIndex = 0;
    // As long as neither the left nor the right arraylist has
    // been used up, keep taking the smaller of left.get(leftIndex)
    // or right.get(rightIndex) and adding it at both.get(bothIndex).
    while (leftIndex < left.size() && rightIndex < right.size()) {
      if ((left.get(leftIndex).compareTo(right.get(rightIndex)))<0) {
          whole.set(wholeIndex,left.get(leftIndex));
          leftIndex++;
      }
      else {
          whole.set(wholeIndex, right.get(rightIndex));
          rightIndex++;
      }
      wholeIndex++;
    }

    ArrayList<String>rest;
    int restIndex;
    if (leftIndex >= left.size()) {
      // The left arraylist has been use up...
      rest = right;
      restIndex = rightIndex;
    }
    else {
      // The right arraylist has been used up...
      rest = left;
      restIndex = leftIndex;
    }
    // Copy the rest of whichever arraylist (left or right) was
    // not used up.
    for (int i=restIndex; i<rest.size(); i++) {
      whole.set(wholeIndex, rest.get(i));
      wholeIndex++;
    }
  }
}

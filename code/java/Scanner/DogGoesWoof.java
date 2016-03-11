import java.util.*;

public class DogGoesWoof {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);

    int woof_count = input.nextInt();

    for(int i=0; i<woof_count; i++){
      System.out.print("woof");
    }
  }
}
import java.util.*;

public class Name {
  public static void main(String[] args){
    Scanner input = new Scanner(System.in);

    System.out.println("Please enter your name: ");

    String name = input.nextLine();

    System.out.println("Greetings, " + name);
  }
}
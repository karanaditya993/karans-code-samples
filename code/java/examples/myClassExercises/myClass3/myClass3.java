public class myClass3 {
  private int a;
  public double b;

  public myClass3(int first, double second) {
    this.a = first;
    this.b = second;
  }

  public static void incrementBoth(myClass3 c1) {
    c1.a = c1.a + 1;
    c1.b = c1.b + 1.0;
  }

  public static void main(String[] args) {
    myClass3 c1 = new myClass3(10, 20.5);
    myClass3 c2 = new myClass3(10, 31.5);

    incrementBoth(c2);
    System.out.println(c1.a +  ", " + c2.a);
  }
}

public class myClass2 {
  private int a;
  public double b;

  public myClass2(int first, double second) {
    this.a = first;
    this.b = second;
  }

  public static void main(String[] args) {
    myClass2 c1 = new myClass2(10, 20.5);
    myClass2 c2 = new myClass2(10, 31.5);
    c2 = c1;
    c1.a = 2;
    System.out.println(c2.a);
  }
}

public class myClass {
  private int a;
  public double b;

  public myClass(int first, double second) {
    this.a = first;
    this.b = second;
  }

  public static void main(String[] args) {
    myClass c1 = new myClass(10, 20.5);
    myClass c2 = new myClass(10, 31.5);
    System.out.println(c1.a + ", " + c1.b);
  }
}

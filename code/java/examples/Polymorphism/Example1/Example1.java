public class Example1 {
  public static class Person {
    public void method1() {
      System.out.println("Person 1");
    }
    public void method2() {
      System.out.println("Person 2");
    }
  }

  public static class Student extends Person {
    public void method1() {
      System.out.println("Student 1");
      super.method1();
      method2();
    }
    public void method2() {
      System.out.println("Student 2");
    }
  }

  public static class Undergrad extends Student {
    public void method2() {
      System.out.println("Undergrad 2");
    }
  }
  public static void main(String[] args) {
    Person u = new Undergrad();
    u.method1();
  }
}

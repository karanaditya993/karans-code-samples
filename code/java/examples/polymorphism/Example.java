public class Example {
  public static void main(String...args) {
    Person p = new Student("Sally");
    p.status(1);
  }
  public static class Person {
      private String name;
      public Person(String name) {
        this.name = name;
      }
      public boolean isAsleep(int hr) {
        return 22 < hr || 7 > hr;
      }
      public String toString(){
        return name;
      }
      public void status(int hr) {
        if (this.isAsleep(hr)) {
          System.out.println("Now offline: " + this);
        }
        else {
          System.out.println("Now online: " + this);
        }
      }
  }
  public static class Student extends Person {
      public Student(String name) {
        super(name);
      }
      public boolean isAsleep(int hr) {
        return 2 < hr && 8 > hr;
      }
  }
}

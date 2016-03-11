class p {
  public static void main(String[] args) {
    System.out.println("parent main");
  }
}
class c extends p {

}
// In terminal:
// javac InheritanceMainMethod.java
// output will be p.class and c.class
// java p will give you parent main
// java c will also give you parent main
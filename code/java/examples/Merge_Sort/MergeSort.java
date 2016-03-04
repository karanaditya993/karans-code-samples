import java.util.*;

public class MergeSort {
  public static void main(String[] args) {
    String breakline = System.getProperty("line.separator");
    // Create 8 airport objects
    Airport montreal = new Airport("Montreal", "Canada", "YMX");
    Airport lagos = new Airport("Lagos", "Nigeria", "LOS");
    Airport essen = new Airport("Essen", "Germany", "ESS");
    Airport chicago = new Airport("Chicago", "USA", "ORD");
    Airport beijing = new Airport("Beijing", "China", "PEK");
    Airport sydney = new Airport("Sydney", "Australia", "SYD");
    Airport quito = new Airport("Quito", "Ecuador", "UIO");
    Airport agra = new Airport("Agra", "India", "AGR");

    // Create an empty arraylist of airport objects
    List<Airport> airports = new ArrayList<Airport>();
    // Add each airport object into the arraylist
    airports.add(montreal);
    airports.add(lagos);
    airports.add(essen);
    airports.add(chicago);
    airports.add(beijing);
    airports.add(sydney);
    airports.add(quito);
    airports.add(agra);

    // Call Collections.sort using custom Comparator
    Collections.sort(airports, new Comparator<Airport>() {
      public int compare(Airport a1, Airport a2) {
        return a1.getCity().compareTo(a2.getCity());
      }
    });
    for (int i = 0, n = airports.size(); i < n; i++) {
      System.out.println(airports.get(i).getCity());
      System.out.println(airports.get(i).getCountry());
      System.out.println(airports.get(i).getCode());
      System.out.print(breakline);
    }
  }
  // Airport class
  public static class Airport{
    private String city;
    private String country;
    private String code3;

    // Constructor function
    public Airport (String city, String country, String code3) {
      this.city = city;
      this.country = country;
      this.code3 = code3;
    }
    // Getters and setters for sorting
    public String getCity() {
      return this.city;
    }
    public String getCountry() {
      return this.country;
    }
    public String getCode() {
      return this.code3;
    }
  }
}

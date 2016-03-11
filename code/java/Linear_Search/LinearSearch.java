import java.util.*;

public class LinearSearch {
  public static void main(String[] args) {
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

    // Call the linear search method to find one of the airports
    findAirportCode("Chicago", airports);
    // findAirportCode("Nevada", airports);
  }

  // Airport class
  public static class Airport {
    private String city;
    private String country;
    private String code3;

    // Constructor function
    public Airport (String city, String country, String code3) {
      this.city = city;
      this.country = country;
      this.code3 = code3;
    }
    // Getters for linear search method
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

  // Linear Search
  public static String findAirportCode(String toFind, List<Airport> airports){
    int index = 0;
    while(index < airports.size()) {
      // For arraylists, accessing the index of the list uses .get(index)
      Airport a = airports.get(index);
      if (toFind.equals(a.getCity())) {
        System.out.println(a.getCity() + " Airport Code: " + a.getCode());
        return (a.getCode());
      }
      index++;
    }
    System.out.println(toFind + " Airport Code: Not available.");
    return null;
  }
}

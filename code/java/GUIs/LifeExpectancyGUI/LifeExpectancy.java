// Import processing
import processing.core.*;

public class LifeExpectancy extends PApplet {
  // Declare unfolding map
  UnfoldingMap map;
  // Map data structure that has key value pairs
  // Take data from outside csv file and store it in a data structure
  // in our class (Map) and that data structure is going to keep
  // track of which life expectancy belongs to which country using
  // key value pairs
  HashMap <String, Float> lifeExpMap;

  // Create a list where the first is allowed to store features
  // and the second is allowed to store markers
  List <Feature> countries;
  List <Marker> countryMarkers;

  public void setup() {
    // Load and setup map
    size(800, 600, OPENGL);
    map = new UnfoldingMap(this, 50, 50, 700, 500, new Google.GoogleMapProvider());
    // Call function that will load the lifexpectancy data from the csv file
    lifeExpMap = loadLifeExpectancyFromCSV("LifeExpectancyWorldBank.csv");

    // Call function that will shade the countries in with the appropriate
    // color
    shadeCountries();
  }
  public void draw() {
    map.draw();
  }

  // Make the helper methods private
  // ShadeCountries helper method to color each country based on life expectancy
  // Red-orange indicates low (near 40)
  // Blue indicates high (near 100)
  private void shadeCountries() {
    for (Marker marker : countryMarkers) {
      String countryId = marker.getId();
      if (lifeExpMap.containsKey(countryId)) {
        float lifeExpMap = lifeExpMap.get(countryId);
        int colorLevel = (int) map(lifeExpMap, 40, 90, 10, 255);
        marker.setColor(color(255-colorLevel), 100, colorlevel);
      }
      else {
        marker.setColor(color(150, 150, 150));
      }
    }

  }

  private HashMap<String, Float> loadLifeExpectancyFromCSV(String filename) {
    // Private helper method that takes in the filename and returns
    // a hashmap of life expectancies with their respective countries

    // Declare construct that will construct the map object that will
    // be returned
    HashMap<String, Float> lifeExpMap = new HashMap<String, Float>();

    // Read in all the fields in the file one row at a time and stick
    // content of row inside array of strings
    String[] rows = loadStrings(fileName);

    // Iterate each row at a time and parse away only the relevant information
    for (String row : rows) {
      // Split row of strings into array of fields
      String[] columns = row.split(",");
      if (...) {
        lifeExpMap.put(columns[4], Float.parseFloat(columns[5]));
      }
    }
    return lifeExpMap;
  }






  }
}

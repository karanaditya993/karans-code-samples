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
  // List the type of object that will be stored inside the container class
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

  }

  private HashMap<String, Float> loadLifeExpectancyFromCSV(String filename) {
    // Private helper method that takes in the filename and returns
    // a hashmap of life expectancies with their respective countries

    // Declare hashmap that will be returned
    HashMap<String, Float> lifeExpMap = new HashMap<String, Float>();

  }
}

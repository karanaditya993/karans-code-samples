require "csv"

def enter_values
  puts "Please enter a person: "
  person = Student.new
  person.name = gets

  puts "Please enter their dorm: "
  person.house = gets

  person.student_living_text(person)
end

class Student
  attr_accessor :name, :house
  def initialize
    @name = name;
    @house = house;
  end

  def student_living_csv
    CSV.open("students.csv", "wb") do |csv|
      csv << ["Student", "House"]
      csv << ["#{@name}", "#{@house}"]
    end
  end

  def student_living_text(person)
    File.open("students.txt" ,"a") do |file|
      file.puts("#{person.name} lived in #{person.house}")
    end
  end
end

enter_values
enter_values
enter_values

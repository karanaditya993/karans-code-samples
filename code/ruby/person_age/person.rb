class Person
  attr_accessor :name, :age
  def initialize
    @name = name
    @age = age
  end

  def full_info
    puts "#{@name} is #{@age} years old."
  end
end

fred = Person.new
fred.name = "Fred";
fred.age = 45;
fred.full_info

# As many Person objects you want and instances of
# persons (peopel)

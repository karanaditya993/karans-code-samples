# Sum of array elements
def sum(arr)
  string_list = arr.split(",")
  num_list = string_list.map(&:to_i)
  sum = num_list.inject(&:+)
  puts sum
end

array_length = gets.to_i
array = gets.gsub(/\s+/, ",")
sum(array)


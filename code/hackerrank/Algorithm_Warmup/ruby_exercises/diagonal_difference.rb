# Diagonal Difference
def matrixCalculation
  # Obtains matrix length
  matrix_length = gets.to_i

  # sets up storage arrays
  right_diagonals = []
  left_diagonals = []

  # make each set of spaced numbers an array called num_list. If the set of numbers are not the same amount of numbers horizontally through the array, raise the argument error
  matrix_length.times do |i|
    array = gets.gsub(/\s+/, ",")
    string_list = array.split(",")
    num_list = string_list.map(&:to_i)
    reverse_list = num_list.reverse

    raise ArgumentError, 'Your array was an incorrect length' unless num_list.length == matrix_length

    right_integer = num_list[i]
    left_integer = reverse_list[i]
    right_diagonals << right_integer
    left_diagonals << left_integer
  end

  right_sum = right_diagonals.inject(&:+)
  left_sum = left_diagonals.inject(&:+)

  sum = right_sum - left_sum

  if sum < 0
    absolute_value_sum = sum * (-1)
    p absolute_value_sum
  else
    p sum
  end
end

matrixCalculation

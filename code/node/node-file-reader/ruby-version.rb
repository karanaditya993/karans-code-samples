# read names.txt, and return an array of upper-cased
# names
def uppercase_names(filename)
  File.read(filename).split.map &:upcase
end

puts uppercase_names('names.txt')
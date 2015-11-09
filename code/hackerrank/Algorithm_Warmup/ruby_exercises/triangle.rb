# Triangle (not inverted)
def triangle(n)
  hashtag = "#"

  n.times do
    puts hashtag
    hashtag = hashtag + "#"
  end
end

triangle(8)
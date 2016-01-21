#!/bin/ruby

def plus_minus
  n = gets.strip.to_i
  arr = gets.strip
  arr = arr.split(' ').map(&:to_f)

  x = 0
  y = 0
  z = 0
  arr.each do |number|
    if number > 0
      x+=1
    elsif number < 0
      y+=1
    else
      z+=1
    end
  end
  puts (x.to_f/n)
  puts (y.to_f/n)
  puts (z.to_f/n)
end

plus_minus




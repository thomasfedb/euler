fibs = [1, 1]

while (next_fib = fibs[-2..-1].sum) <= 4000000
 fibs << next_fib
end

puts fibs.select {|f| f % 2 == 0 }.sum

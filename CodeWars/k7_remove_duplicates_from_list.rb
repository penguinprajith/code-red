def distinct(seq)
  # your code here
  d = []
  seq.select do |num| 
    d << num if d.include?(num) == false
  end
end

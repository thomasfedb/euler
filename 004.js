biggest = -1

for (a = 100; a < 1000; a++) {
  for (b = a; b < 1000; b++) {
    c = a * b

    if (c > biggest & c.toString() == c.toString().split('').reverse().join('')) {
      biggest = c
    }
  }
}

console.log(biggest)
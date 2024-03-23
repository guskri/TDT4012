
#a) Oversett følgende kodesnutt til Python.

#bool isFibonacciNumber(int n) {
#       int a = 0;
#       int b = 1;
#       while (b < n) {
#           int temp = b;
#           b += a;
#           a = temp;
#       }
#       return b == n;
#   }

n = 2

def isFibonacciNumer(n):
    a = 0
    b = 1
    while b < n:
        temp = b
        b += a
        a = temp
    return b == n
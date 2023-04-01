#include <complex>
#include <iostream>

typedef std::complex<double> complex;

double squre(complex a, complex b, complex c) {
  double h = (conj(b - a) * (c - a)).imag() / abs(b - a) / abs(c - a);
  return h * abs(b - a);
}

int main(int argc, char const *argv[]) {
  complex a(3, 7), b(3, 2), c(10, 2);
  double s = squre(a, b, c);
  std::cout << s << std::endl;

  complex t(4, 5);
  complex a1 = a + t, b1 = b + t, c1 = c + t;
  double s1 = squre(a1, b1, c1);
  std::cout << s1 << std::endl;
  return 0;
}

#include <complex>
#include <iostream>

typedef std::complex<double> complex;

double squre(complex a, complex b, complex c) {
  double h = (conj(b - a) * (c - a)).imag() / abs(b - a) / abs(c - a);
  return h * abs(b - a);
}

int main(int argc, char const *argv[]) {
  complex a(3, 7), b(3, 2), c(10, 2);
  std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
  double s = squre(a, b, c);
  std::cout << s << std::endl;

  complex t(4, 5);
  complex a1 = a + t, b1 = b + t, c1 = c + t;
  std::cout << "a' = " << a1 << ", b' = " << b1 << ", c' = " << c1 << std::endl;
  double s1 = squre(a1, b1, c1);
  std::cout << s1 << std::endl;

  complex r = exp(complex(0, -M_PI / 4));
  complex a2 = a1 * r, b2 = b1 * r, c2 = c1 * r;
  std::cout << "a'' = " << a2 << ", b'' = " << b2 << ", c'' = " << c2
            << std::endl;
  double s2 = squre(a2, b2, c2);
  std::cout << s2 << std::endl;
  
  return 0;
}

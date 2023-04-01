#include <complex>
#include <iostream>

typedef std::complex<double> Complex;

int main(int argc, char const *argv[]) {
  Complex A(3, 7), B(3, 2), C(10, 2);
  double h = (conj(B - A) * (C - A)).imag() / abs(B - A) / abs(C - A);
  double squre = h * abs(B - A);
  std::cout << squre << std::endl;
  return 0;
}

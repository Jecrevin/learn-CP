#include <complex>
#include <iomanip>
#include <iostream>
#include <limits>

typedef std::complex<double> Complex;

/// @brief the square of triangle ABC.
double square(Complex a, Complex b, Complex c) {
  Complex ac = c - a, ab = b - a;
  return std::abs((ac * std::conj(ab)).imag()) / 2;
}

int main(int argc, char const *argv[]) {
  Complex x0 = 1., x1 = exp(Complex(0., 2. * M_PI / 3.));
  double s = square(x0, x1, conj(x1));
  unsigned int nsides = 3;

  double splus;
  Complex nextX;

  while (nsides < std::numeric_limits<int>::max()) {
    nextX = (x0 + x1) / abs(x0 + x1);
    splus = square(x0, x1, nextX);
    s += nsides * splus;
    x1 = nextX, nsides *= 2;
  }

  std::cout << std::setprecision(16) << "pi: " << s << std::endl;

  return 0;
}

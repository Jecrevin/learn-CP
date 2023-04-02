#include <complex>
#include <iostream>
#include <sstream>

typedef std::complex<double> Complex;

constexpr Complex IM(0., 1.);

double parse(int argc, const char *argv);

int main(int argc, char const *argv[]) {
  if (argc != 3 && argc != 4) {
    std::cerr << "Usage:\n\n\tbarrier energy potential [width of barrier]\n\n";
    std::cerr << "Default barrier width set to 1.\n";
    return -1;
  }

  double energy, potential, width = 1.;
  try {
    energy = parse(argc, argv[1]);
    potential = parse(argc, argv[2]);
    if (argc == 4) width = parse(argc, argv[3]);
  } catch (const char *msg) {
    std::cerr << msg << '\n';
    return -1;
  }

  Complex k1 = std::sqrt(2 * energy),
          k2 = std::sqrt(2. * Complex(energy - potential, 0.));

  Complex coeff = 4. * k1 * k2 * std::exp(-IM * k1 * width) /
                  (std::pow(k1 + k2, 2) * std::exp(-IM * k2 * width) -
                   std::pow(k1 - k2, 2) * std::exp(IM * k2 * width));

  double transCoeff = std::abs(coeff);
  double reflectCoeff = 1. - transCoeff;
  std::cout << "T = " << transCoeff << '\n';
  std::cout << "R = " << reflectCoeff << '\n';

  return 0;
}

double parse(int argc, const char *argv) {
  double number;
  std::istringstream stream(argv);
  if (!(stream >> number)) throw "argument must be a number.";
  return number;
}

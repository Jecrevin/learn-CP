#include <complex>
#include <iostream>
#include <sstream>

typedef std::complex<double> Complex;

Complex parse(const char *argv) {
  char pm, i;
  double real, imag;
  std::istringstream stream(argv);
  if (!(stream >> real >> pm >> imag >> i) ||
      (pm != '+' && pm != '-' || i != 'i')) {
    throw std::invalid_argument("Invalid complex number: " + std::string(argv));
  }
  return Complex(real, imag);
}

int main(int argc, char const *argv[]) {
  if (argc != 4) {
    std::cerr << "This is a program to solve ax^2 + bx + c = 0.\n"
              << "\n\tUsage: " << argv[0] << " <a> <b> <c>\n\n"
              << "Arguments should be in complex form of [x + yi].\n";
    return -1;
  }

  Complex a, b, c;
  try {
    a = parse(argv[1]), b = parse(argv[2]), c = parse(argv[3]);
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    std::cerr << "Complex numbers should be in form of [x+yi].\n";
    return -1;
  }

  Complex k = std::sqrt(b * b - 4. * a * c);
  std::cout << "x1 = " << (-b + k) / 2. / a << ", x2 = " << (-b - k) / 2. / a
            << std::endl;

  return 0;
}

#include <complex>
#include <iostream>
#include <sstream>

typedef std::complex<double> Complex;

int main(int argc, char const *argv[]) {
  std::istringstream stream(argv[1]);
  Complex a;
  if (!(stream >> a)) {
    std::cerr << "Failed\n";
    return -1;
  }
  std::cout << a << std::endl;

  return 0;
}

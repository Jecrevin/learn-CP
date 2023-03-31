#include <cmath>
#include <iostream>
#include <sstream>

int main(int argc, char const *argv[]) {
  if (argc < 2) {
    std::cerr << "missing operand.\n"
              << "Usage: exp number\n";
    return -1;
  }
  if (argc > 3) {
    std::cerr << "too many operands.\n";
    return -1;
  }
  int num;
  {
    std::istringstream stream(argv[1]);
    if (!(stream >> num)) {
      std::cerr << "argument shoud be a number.\n";
      return -1;
    }
  }
  std::cout << exp(num) << std::endl;

  return 0;
}

#include <iostream>
#include <sstream>

int main(int argc, char const *argv[]) {
  if (argc != 3) {
    std::cerr << "two arguments expected.\n"
              << "Usage:\n\tplus number1 number2\n";
    return -1;
  }
  int a, b;
  {
    std::istringstream stream(argv[1]);
    if (!(stream >> a)) {
      std::cerr << "the first argument should be a integer.";
      return -1;
    }
  }
  {
    std::istringstream stream(argv[2]);
    if (!(stream >> b)) {
      std::cerr << "the second argument should be a integer.";
      return -1;
    }
  }
  std::cout << a + b << std::endl;

  return 0;
}

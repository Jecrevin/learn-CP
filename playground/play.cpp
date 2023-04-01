#include <iostream>
#include <limits>

int main(int argc, char const *argv[]) {
  std::cout << "float's machine precision: "
            << std::numeric_limits<float>::min() << std::endl;
  std::cout << "double's machine precision: "
            << std::numeric_limits<double>::min() << std::endl;
  return 0;
}

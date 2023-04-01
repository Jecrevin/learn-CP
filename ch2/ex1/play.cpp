#include <iostream>
#include <limits>

int main(int argc, char const *argv[]) {
  std::cout << "float's machine precision: "
            << std::numeric_limits<float>::epsilon() << std::endl;
  std::cout << "double's machine precision: "
            << std::numeric_limits<double>::epsilon() << std::endl;
  return 0;
}

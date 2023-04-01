#include <iostream>
#include <limits>

int main(int argc, char const *argv[]) {
  std::cout << std::numeric_limits<bool>::min() << std::endl;
  std::cout << std::numeric_limits<bool>::max() << std::endl;
  std::cout << static_cast<int>(std::numeric_limits<unsigned char>::min())
            << std::endl;
  std::cout << static_cast<int>(std::numeric_limits<unsigned char>::max())
            << std::endl;
  std::cout << std::numeric_limits<int>::min() << std::endl;
  std::cout << std::numeric_limits<int>::max() << std::endl;
  std::cout << std::numeric_limits<unsigned int>::min() << std::endl;
  std::cout << std::numeric_limits<unsigned int>::max() << std::endl;
  std::cout << std::numeric_limits<long int>::min() << std::endl;
  std::cout << std::numeric_limits<long int>::max() << std::endl;
  std::cout << std::numeric_limits<long unsigned int>::min() << std::endl;
  std::cout << std::numeric_limits<long unsigned int>::max() << std::endl;
  return 0;
}

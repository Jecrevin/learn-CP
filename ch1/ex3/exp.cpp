#include <iostream>
#include <sstream>

/// @brief Generate factorial of a number.
int factorial(int n) {
  int ans = 1;
  for (int i = 2; i <= n; i++) {
    ans *= i;
  }
  return ans;
}

/// @brief returns a to the n th power.
double pow(double a, int n) {
  double ans = 1;
  for (size_t i = 0; i < n; i++) {
    ans *= a;
  }
  return ans;
}

/// @brief reterns exp(a) by Talor expansion.
/// @param a input number.
/// @param acc the number of items in expansion expression.
double exp(double a, int acc = 10) {
  double sum = 0;
  for (size_t i = 0; i < acc; i++) {
    sum += pow(a, i) / factorial(i);
  }
  return sum;
}

int main(int argc, char const *argv[]) {
  if (argc < 2) {
    std::cerr << "missing operand.\n"
              << "Usage: exp number [accuracy]\n";
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
  if (argc == 3) {
    int acc;
    std::istringstream stream(argv[2]);
    if (!(stream >> acc)) {
      std::cerr << "argument shoud be a number.\n";
      return -1;
    }
    std::cout << exp(num, acc) << std::endl;
  } else {
    std::cout << exp(num) << std::endl;
  }

  return 0;
}

#include <cmath>
#include <iomanip>
#include <iostream>

int main(int argc, char const *argv[]) {
  constexpr double betas[] = {0.9, 0.99, 0.999, 0.9999, 0.99999};
  constexpr double epsilons[] = {0.1, 0.01, 0.001, 0.0001, 0.00001};

  double gammas01[5], gammas02[5];
  for (size_t i = 0; i < 5; i++) {
    gammas01[i] = 1 / sqrt(1 - betas[i] * betas[i]);
    gammas02[i] = 1 / sqrt((2 - epsilons[i]) * epsilons[i]);
  }
  std::cout << std::setprecision(16) << "gamma by beta | by epsilon\n";
  for (size_t i = 0; i < 5; i++) {
    std::cout << gammas01[i] << " | " << gammas02[i] << std::endl;
  }

  return 0;
}

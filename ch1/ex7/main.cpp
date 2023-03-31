#include <iostream>

int* parse(const int argc, const char* argv[]);
int add(int a, int b);
void print(int num);

int main(int argc, char const* argv[]) {
  int* nums = nullptr;
  try {
    nums = parse(argc, argv);
  } catch (const char* msg) {
    std::cerr << msg << '\n';
    return -1;
  }
  print(add(nums[0], nums[1]));
  delete nums;
  return 0;
}

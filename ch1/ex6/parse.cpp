#include <sstream>

int* parse(const int argc, const char* argv[]) {
  if (argc != 3) {
    throw "two arguments expected.\nUsage:\n\tplus number1 number2";
  }
  int* nums = new int[2];
  {
    std::istringstream stream(argv[1]);
    if (!(stream >> nums[0])) {
      delete nums;
      throw "the first argument should be a integer.";
    }
  }
  {
    std::istringstream stream(argv[2]);
    if (!(stream >> nums[1])) {
      delete nums;
      throw "the second argument should be a integer.";
    }
  }
  return nums;
}
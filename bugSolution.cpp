#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  // Problematic code:
  std::vector<bool> boolVec = {true, false, true, true};
  auto it = std::find(boolVec.begin(), boolVec.end(), false);
  if (it != boolVec.end()) {
    std::cout << "Found false at index: " << std::distance(boolVec.begin(), it) << std::endl;
  } else {
    std::cout << "false not found" << std::endl;
  }

  // Solution: Use a different container
  std::vector<int> intVec = {1, 0, 1, 1}; // 1 for true, 0 for false
  auto it2 = std::find(intVec.begin(), intVec.end(), 0);
  if (it2 != intVec.end()) {
    std::cout << "Found 0 at index: " << std::distance(intVec.begin(), it2) << std::endl;
  } else {
    std::cout << "0 not found" << std::endl;
  }

  return 0;
}

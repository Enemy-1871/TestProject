#include <iostream>

int func(int a, int b) {
  return a + b;
} 

int main() {
  std::cout << "yes\n";
  std::cout << func(1, 2) << "\n";
  return 0;
}
#include <iostream>

int f(int a, int b) {
  return a + b;
}

void print() {
  std::cout << "yes\n";
}

int main() {
  std::cout << f(1, 2) << "\n";
  return 0;
}
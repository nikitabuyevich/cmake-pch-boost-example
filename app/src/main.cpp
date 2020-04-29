#include <iostream>
#include "fmt/format.h"
#include "foobar.h"

int main() {
  std::cout << "Hello, World!" << std::endl;
  fmt::print("Meanie: {}, Moment: {}\n", 1, 2);
  fmt::print("Yay {}", convert("ree"));
  return 0;
}

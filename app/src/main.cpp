#include <iostream>
#include <fmt/format.h>
#include <foobar.h>

#include <boost/accumulators/accumulators.hpp>

int main() {
  std::cout << "Hello, World!" << std::endl;
  fmt::print("Meanie: {}, Moment: {}\n", 1, 2);
  fmt::print("REEEEEE2\n");
  fmt::print("Yay {}", auga("ree"));
  return 0;
}

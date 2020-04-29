#include <iostream>
#include <fmt/format.h>
#include <foobar/foobar.h>

int main() {
  std::cout << "Hello, World!" << std::endl;
  fmt::print("Stuff\n");
  fmt::print("Yay {}\n", auga("..."));

  std::vector<double> input = {1.3, 2.3, 3.4, 4.5};

  auto[mean, moment] = accumulate_vector(input);

  fmt::print("Mean: {}, Moment: {}\n", mean, moment);

  return 0;
}

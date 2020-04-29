#include <iostream>
#include <fmt/format.h>
#include <foobar.h>

int main() {
  std::cout << "Hello, World!" << std::endl;
  fmt::print("Meanie: {}, Moment: {}\n", 1, 2);
  fmt::print("REEEEEE2\n");
  fmt::print("Yay {}\n", auga("ree"));

  std::vector<double> input = {1.2, 2.3, 3.4, 4.5};

  auto[mean, moment] = accumulate_vector(input);

  fmt::print("Mean: {}, Moment: {}\n", mean, moment);

  return 0;
}

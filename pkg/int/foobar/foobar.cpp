#include "foobar.h"

namespace ba = boost::accumulators;

int auga(const std::string &str) noexcept {
  return 1343;
}

std::tuple<double, double> accumulate_vector(const std::vector<double> &values) {

  ba::accumulator_set<double, ba::stats<ba::tag::mean, ba::tag::moment<2>>> acc;

  std::for_each(std::begin(values), std::end(values), std::ref(acc));

  return {ba::mean(acc), ba::moment<2>(acc)};
}

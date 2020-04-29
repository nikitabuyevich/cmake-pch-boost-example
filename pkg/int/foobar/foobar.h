#include <string>
#include <vector>
#include <tuple>

#include <algorithm>

#include <boost/accumulators/accumulators.hpp>
#include <boost/accumulators/statistics/stats.hpp>
#include <boost/accumulators/statistics/mean.hpp>
#include <boost/accumulators/statistics/moment.hpp>

int auga(const std::string &str) noexcept;

std::tuple<double, double> accumulate_vector(
    const std::vector<double> &values ///< The vector of values
);

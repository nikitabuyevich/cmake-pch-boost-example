#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <foobar.h>

TEST_CASE("Quick check", "[main]") {
  auto r = auga("wee");

  REQUIRE(r == 1337);
}


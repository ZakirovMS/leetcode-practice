#include <boost/test/unit_test.hpp>
#include "solution.hpp"

BOOST_AUTO_TEST_CASE(regularSquareDataTest)
{
  std::vector< std::vector< int > > source = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
  p3286::Solution sol;
  BOOST_TEST(sol.findSafeWalk(source, 1) == true);
}

BOOST_AUTO_TEST_CASE(failSquareDataTest)
{
  std::vector< std::vector< int > > source = {{0, 0, 0}, {1, 1, 1}, {0, 0, 0}};
  p3286::Solution sol;
  BOOST_TEST(sol.findSafeWalk(source, 1) == false);
}

BOOST_AUTO_TEST_CASE(regularRectangleDataTest)
{
  std::vector< std::vector< int > > source = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
  p3286::Solution sol;
  BOOST_TEST(sol.findSafeWalk(source, 1) == true);
}

BOOST_AUTO_TEST_CASE(failRectangleDataTest)
{
  std::vector< std::vector< int > > source = {{0, 0, 0}, {1, 1, 1}, {0, 0, 0}, {0, 0, 0}};
  p3286::Solution sol;
  BOOST_TEST(sol.findSafeWalk(source, 1) == false);
}

BOOST_AUTO_TEST_CASE(LabyrinthRectangleDataTest)
{
  std::vector< std::vector< int > > source = {{0, 0, 0}, {1, 0, 1}, {0, 0, 0}, {0, 0, 0}};
  p3286::Solution sol;
  BOOST_TEST(sol.findSafeWalk(source, 1) == true);
}

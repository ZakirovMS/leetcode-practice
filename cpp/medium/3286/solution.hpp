#ifndef SOLUTION_HPP
#define SOLUTION_HPP
#include <vector>
#include <list>

namespace p3286
{
  class Solution
  {
  public:
    bool findSafeWalk(std::vector< std::vector< int > > & grid, int health);
    std::list< std::pair< int, int > > & expandWave(std::vector< std::vector< int > > & grid,
                                                      std::list< std::pair< int, int > > & wave,
                                                      std::vector< std::vector< int > > & weightMtx);
  };
}

#endif

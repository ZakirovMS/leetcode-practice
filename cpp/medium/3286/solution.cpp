#include "solution.hpp"

bool p3286::Solution::findSafeWalk(std::vector< std::vector< int > > & grid, int health)
{
  std::list< std::pair< int, int > > wave;
  std::vector< std::vector< int > > weightMtx(grid.size(), std::vector< int >(grid[0].size(), -1));
  wave.push_back(std::make_pair(0, 0));
  weightMtx[0][0] = grid[0][0];

  while (wave.size() != 0)
  {
    std::list< std::pair< int, int > > newWave = expandWave(grid, wave, weightMtx);
  }

  if (weightMtx[grid.size() - 1][grid[0].size() - 1] > health)
  {
    return false;
  }

  return true;
}

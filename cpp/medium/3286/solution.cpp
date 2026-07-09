#include "solution.hpp"

std::list< std::pair< int, int > > & p3286::Solution::expandWave(std::vector< std::vector< int > > & grid,
                                                                  std::list< std::pair< int, int > > & wave,
                                                                  std::vector< std::vector< int > > & weightMtx)
{
  std::list< std::pair< int, int > > newWave;
  for (auto i = wave.begin(); i != wave.end(); ++i)
  {
    int m = i->first;
    int n = i->second;
    if (m != 0 && weightMtx[m - 1][n] == -1)
    {
      newWave.push_back(std::make_pair(m - 1, n));
      weightMtx[m - 1][n] = weightMtx[m][n] + grid[m - 1][n];
    }
    if (n != 0 && weightMtx[m][n - 1] == -1)
    {
      newWave.push_back(std::make_pair(m, n - 1));
      weightMtx[m][n - 1] = weightMtx[m][n] + grid[m][n - 1];
    }
    if (m != grid.size() - 1 && weightMtx[m + 1][n] == -1)
    {
      newWave.push_back(std::make_pair(m + 1, n));
      weightMtx[m + 1][n] = weightMtx[m][n] + grid[m + 1][n];
    }
    if (n != grid[0].size() - 1 && weightMtx[m][n + 1] == -1)
    {
      newWave.push_back(std::make_pair(m, n + 1));
      weightMtx[m][n + 1] = weightMtx[m][n] + grid[m][n + 1];
    }
  }

  std::swap(wave, newWave);
  return newWave;
}

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

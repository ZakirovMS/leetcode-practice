#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include <vector>
#include <utility>

class Solution
{
public:
  bool predictTheWinner(std::vector< int > & nums);
  std::pair< size_t, size_t > recursionFunc(std::vector< int > & nums, std::pair< size_t, size_t > bords, std::pair< size_t, size_t > scores, bool isPlayerStTurn);
};

#endif

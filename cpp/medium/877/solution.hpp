#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include <vector>
#include <unordered_map>
#include <utility>

class Solution {
public:
  bool stoneGame(std::vector< int > & piles);
  bool predict(std::vector< int > & piles, int scoreStm, int scoreNd, int left, int right, bool isFirstPlayerTurn);
};

#endif

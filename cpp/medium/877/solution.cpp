#include "solution.hpp"

bool Solution::stoneGame(std::vector< int > & piles)
{
  return predict(piles, 0, 0, 0, piles.size() - 1, true);
}

bool Solution::predict(std::vector< int > & piles, int scoreSt, int scoreNd, int lt, int rt, bool isStPlayerTurn)
{
  if (lt > rt)
  {
    return scoreSt > scoreNd;
  }

  if (isStPlayerTurn)
  {
    return predict(piles, scoreSt + piles[lt], scoreNd, lt + 1, rt, false) || predict(piles, scoreSt + piles[rt], scoreNd, lt, rt - 1, false);
  }
  
  return predict(piles, scoreSt, scoreNd + piles[lt], lt + 1, rt, true) && predict(piles, scoreSt, scoreNd + piles[rt], lt, rt - 1, true);
}

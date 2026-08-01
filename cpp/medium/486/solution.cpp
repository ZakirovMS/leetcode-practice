#include "solution.hpp"


bool Solution::predictTheWinner(std::vector< int > & nums)
{
  std::pair< size_t, size_t > bords{0, nums.size() - 1};
  std::pair< size_t, size_t > scores{0, 0};
  std::pair< size_t, size_t > result = recursionFunc(nums, bords, scores, true);
  if (result.first >= result.second)
  {
    return true;
  }

  return false;
}

std::pair< size_t, size_t > Solution::recursionFunc(std::vector< int > & nums, std::pair< size_t, size_t > bords, std::pair< size_t, size_t > scores, bool isPlayerStTurn)
{
  if (bords.first == bords.second)
  {
    if (isPlayerStTurn)
    {
      scores.first += nums[bords.first];
    }
    else
    {
      scores.second += nums[bords.second];
    }

    return scores;
  }

  std::pair< size_t, size_t > othBords(bords);
  std::pair< size_t, size_t > othScores(scores);

  if (isPlayerStTurn)
  {
    scores.first += nums[bords.first];
    ++bords.first;
    othScores.first += nums[othBords.second];
    --othBords.second;
    bords = recursionFunc(nums, bords, scores, false);
    othBords = recursionFunc(nums, othBords, othScores, false);
  }
  else
  {
    scores.second += nums[bords.first];
    ++bords.first;
    othScores.second += nums[othBords.second];
    --othBords.second;
    bords = recursionFunc(nums, bords, scores, true);
    othBords = recursionFunc(nums, othBords, othScores, true);
  }

  if (bords.first >= bords.second)
  {
    return bords;
  }
  else if (othBords.first >= othBords.second)
  {
    return othBords;
  }
  else
  {
    return bords;
  }
}
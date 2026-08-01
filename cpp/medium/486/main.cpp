#include <iostream>
#include "solution.hpp"

int main()
{
  std::vector< int > test {1, 5, 233, 7};
  Solution sol;
  std::cout << sol.predictTheWinner(test) << '\n';
}

#include <iostream>
#include "solution.hpp"

int main()
{
  std::vector< int > test {1, 2, 3};
  Solution sol;
  std::cout << sol.predictTheWinner(test) << '\n';
}

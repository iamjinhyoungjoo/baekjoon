#include <array>
#include <iostream>
#include <string>

auto main() -> int {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);

  std::string input = "";
  std::cin >> input;

  std::array<int, 26> alpha_count = {0};
  for (auto ch : input)
    alpha_count[ch - 'a']++;

  for (auto cnt : alpha_count)
    std::cout << cnt << ' ';

  return 0;
}

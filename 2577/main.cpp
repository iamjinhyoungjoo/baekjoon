#include <array>
#include <iostream>

auto main() -> int {
  int A = 0, B = 0, C = 0;
  std::cin >> A >> B >> C;

  int target = A * B * C;

  std::array<int, 10> digit_count = {0};
  while (target != 0) {
    digit_count[target % 10] += 1;
    target /= 10;
  }

  for (int cnt : digit_count)
    std::cout << cnt << '\n';

  return 0;
}

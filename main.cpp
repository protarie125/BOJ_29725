#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  auto ans = 0LL;
  for (auto i = 0; i < 8; ++i) {
    string s;
    cin >> s;

    for (const auto& x : s) {
      if ('P' == x) {
        ans += 1;
      } else if ('p' == x) {
        ans -= 1;
      } else if ('N' == x) {
        ans += 3;
      } else if ('n' == x) {
        ans -= 3;
      } else if ('B' == x) {
        ans += 3;
      } else if ('b' == x) {
        ans -= 3;
      } else if ('R' == x) {
        ans += 5;
      } else if ('r' == x) {
        ans -= 5;
      } else if ('Q' == x) {
        ans += 9;
      } else if ('q' == x) {
        ans -= 9;
      }
    }
  }

  cout << ans;

  return 0;
}
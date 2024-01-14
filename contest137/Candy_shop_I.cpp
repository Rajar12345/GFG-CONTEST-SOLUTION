#include <vector>
#include <algorithm>
#include <unordered_map>

int calculateTotalCandies(int n, std::vector<int> &candies) {
  // Sorting the candies in ascending order
  std::sort(candies.begin(), candies.end());

  // Counting the occurrences of each type of candy
  std::unordered_map<int, int> candyCount;

  for (int i = 0; i < n; i++) {
    candyCount[candies[i]]++;
  }

  // Calculating the total number of candies by adding unique types
  int totalCandies = 0;
  for (const auto &candy : candyCount) {
    totalCandies += candy.first;
  }

  return totalCandies;
}


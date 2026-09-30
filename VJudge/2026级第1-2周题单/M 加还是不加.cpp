#include <iostream>
#include <vector>
#include <algorithm>

std::pair<int, int> maxCountWithKOperations(std::vector<int>& nums, int k) {
    std::sort(nums.begin(), nums.end());
    int n = nums.size();
    int max_count = 0;
    int min_value = 0;
    for (int i = 0; i < n; ++i) {
        long long used_ops = 0;
        int count = 0;
        for (int j = i; j >= 0; --j) {
            int diff = nums[i] - nums[j];
            if (used_ops + diff <= k) {
                used_ops += diff;
                count++;
            } else {
                break;
            }
        }
        if (count > max_count || (count == max_count && nums[i] < min_value)) {
            max_count = count;
            min_value = nums[i];
        }
    }
    return {max_count, min_value};
}

int main() {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    auto result = maxCountWithKOperations(nums, k);
    std::cout << result.first << " " << result.second << std::endl;
    return 0;
}

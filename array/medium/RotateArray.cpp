#include <iostream>
#include <vector>

void rotate(std::vector<int>& nums, int k) {
    int n = nums.size();
    k %= n; // Handle k > n
    std::reverse(nums.begin(), nums.end()); // Reverse the whole array
    std::reverse(nums.begin(), nums.begin() + k); // Reverse the first k elements
    std::reverse(nums.begin() + k, nums.end()); // Reverse the rest
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    rotate(nums, k);
    std::cout << "Rotated array: ";
    for (int num : nums) {
        std::cout << num << " "; // Output: Rotated array: 5 6 7 1 2 3 4
    }
    std::cout << std::endl;
    return 0;
}

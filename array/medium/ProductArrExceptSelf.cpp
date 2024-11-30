#include <iostream>
#include <vector>

std::vector<int> productExceptSelf(std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> output(n, 1);
    int left = 1, right = 1;

    for (int i = 0; i < n; ++i) {
        output[i] *= left; // Product of elements to the left
        left *= nums[i]; // Update left product
    }

    for (int i = n - 1; i >= 0; --i) {
        output[i] *= right; // Product of elements to the right
        right *= nums[i]; // Update right product
    }

    return output;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4};
    auto result = productExceptSelf(nums);
    std::cout << "Product of array except self: ";
    for (int num : result) {
        std::cout << num << " "; // Output: Product of array except self: 24 12 8 6
    }
    std::cout << std::endl;
    return 0;
}

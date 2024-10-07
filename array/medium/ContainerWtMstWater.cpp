#include <iostream>
#include <vector>
#include <algorithm>

int maxArea(std::vector<int>& height) {
    int max_area = 0;
    int left = 0, right = height.size() - 1;
    while (left < right) {
        int area = std::min(height[left], height[right]) * (right - left);
        max_area = std::max(max_area, area);
        if (height[left] < height[right]) {
            ++left;
        } else {
            --right;
        }
    }
    return max_area;
}

int main() {
    std::vector<int> height = {1,8,6,2,5,4,8,3,7};
    std::cout << "Maximum area: " << maxArea(height) << std::endl; // Output: Maximum area: 49
    return 0;
}

#include <iostream>
#include <vector>

std::vector<int> spiralOrder(std::vector<std::vector<int>>& matrix) {
    std::vector<int> result;
    if (matrix.empty()) return result;

    int left = 0, right = matrix[0].size() - 1, top = 0, bottom = matrix.size() - 1;

    while (left <= right && top <= bottom) {
        for (int i = left; i <= right; ++i) result.push_back(matrix[top][i]); // Traverse from left to right
        ++top;
        for (int i = top; i <= bottom; ++i) result.push_back(matrix[i][right]); // Traverse from top to bottom
        --right;
        if (top <= bottom) {
            for (int i = right; i >= left; --i) result.push_back(matrix[bottom][i]); // Traverse from right to left
            --bottom;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; --i) result.push_back(matrix[i][left]); // Traverse from bottom to top
            ++left;
        }
    }
    return result;
}

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    auto result = spiralOrder(matrix);
    std::cout << "Spiral order: ";
    for (int num : result) {
        std::cout << num << " "; // Output: Spiral order: 1 2 3 6 9 8 7 4 5
    }
    std::cout << std::endl;
    return 0;
}

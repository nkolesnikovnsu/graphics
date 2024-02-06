#include <iostream>
#include <vector>
#include <math.h>

class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxArea = 0;

        while (left < right) {
            int currentArea = std::min(height[left], height[right]) * (right - left);
            maxArea = std::max(maxArea, currentArea);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxArea;
    }
};
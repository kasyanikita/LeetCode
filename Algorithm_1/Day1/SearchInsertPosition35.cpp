#include <algorithm>
#include <iostream>
#include <vector>

int searchInsert(const std::vector<int>& nums, int target) {
    int l = -1;
    int r = nums.size();
    int m = 0;
    while (l < r - 1) {
        m = l + (r - l) / 2;
        if (nums[m] < target) {
            l = m;
        } else {
            r = m;
        }
    }
    return r;
}


int main() {
    std::cout << searchInsert({5, 6, 8, 8, 9, 10}, 7);
    return 0;
}
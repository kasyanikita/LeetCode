#include <algorithm>
#include <iostream>
#include <vector>

int search(const std::vector<int>& nums, int target) {
    int l = 0;
    int r = nums.size() - 1;
    int m = 0;
    while (l <= r) {
        m = l + (r - l) / 2;
        if (nums[m] > target) {
            r = m - 1;
        } else if (nums[m] < target) {
            l = m + 1;
        } else {
            return m;
        }
    }
    return -1;
}


int main() {
    std::cout << search({-1,0,3,5,9,12}, 2);
    return 0;
}
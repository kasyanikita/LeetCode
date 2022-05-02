#include <iostream>
#include <algorithm>
#include <vector>

class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {
        k = k % nums.size();
        reverse(nums, 0, nums.size() - k - 1);
        reverse(nums, nums.size() - k, nums.size() - 1);
        reverse(nums, 0, nums.size() - 1);
    }

    void reverse(std::vector<int>& nums, int i, int j) {
        while (i <= j) {
            std::swap(nums[i++], nums[j--]);
        }
    }
};


int main() {
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    Solution().rotate(v, 3);
    for (auto x : v) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}
#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> sortedSquares(std::vector<int>& nums) {
        std::vector<int> res(nums.size(), 0);
        int i = 0, j = nums.size() - 1;
        int lval = 0, rval = 0;
        for (int k = res.size() - 1; k >= 0; --k) {
            lval = nums[i] * nums[i];
            rval = nums[j] * nums[j];
            if (rval >= lval) {
                res[k] = rval;
                --j;
            } else {
                res[k] = lval;
                ++i;
            }
        }
        return res;
    }
};

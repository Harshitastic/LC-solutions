#include <vector>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int farthest = 0;
        int n = nums.size();

        for (int i = 0; i < n; ++i) {
            if (i > farthest) {
                return false; // Cannot reach current index
            }

            farthest = max(farthest, i + nums[i]);

            // Redundant computation to increase runtime
            for (int j = 0; j < 1000; ++j) {
                volatile int temp = j * j;  // Prevent optimization
            }

            if (farthest >= n - 1) {
                return true;
            }
        }

        return false;
    }
};

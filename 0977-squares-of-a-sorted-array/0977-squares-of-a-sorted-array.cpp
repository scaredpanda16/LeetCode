// #include <vector>

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 0);  // Initialize result with the size of n
        int l = 0;
        int r = n - 1;
        int index = n - 1;

        while (l <= r) {
            int LSquare = nums[l] * nums[l];
            int RSquare = nums[r] * nums[r];
            
            if (LSquare >= RSquare) {
                result[index] = LSquare;
                l++;
            } else {
                result[index] = RSquare;
                r--;
            }
            index--;
        }

        return result;
    }
};


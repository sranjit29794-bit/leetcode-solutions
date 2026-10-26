class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        
        int count = 0;
        int left = 0;
        int right = nums.size() - 1;
        
        while (left < right) {
            // If current pair sum is less than target, 
            // all pairs between left and right are also valid
            if (nums[left] + nums[right] < target) {
                count += (right - left);
                left++; // Move left pointer to look for larger values
            } else {
                right--; // Move right pointer to decrease the sum
            }
        }
        
        return count;
    }
};
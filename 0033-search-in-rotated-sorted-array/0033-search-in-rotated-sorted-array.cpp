class Solution {
public:
    int search(vector<int>& nums, int target) {
        

    int low = 0;
    int high = nums.size() - 1;

    while (low <= high) {

        int mid = low + (high - low) / 2;

        // Target found
        if (nums[mid] == target) {
                return mid;
        }

        // Left side is sorted
        if (nums[low] <= nums[mid]) {

            // Target is in left side
            if (nums[low] <= target && target < nums[mid]) {
                high = mid - 1;
            }
            // Target is in right side
            else {
                low = mid + 1;
            }
        }

        // Right side is sorted
        else {

            // Target is in right side
            if (nums[mid] < target && target <= nums[high]) {
                low = mid + 1;
            }
            // Target is in left side
            else {
                high = mid - 1;
            }
        }
    }

    return -1;
    }
};
        
    

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        int r_sum = 0;
        int l_sum = 0;
        for(int i=0;i<nums.size();i++){
            sum = sum + nums[i];
        }
         for(int i=0;i<nums.size();i++){
           if (l_sum == sum - l_sum - nums[i]) {
                return i;
            }
            l_sum += nums[i];
        }
        return -1;
    }
};
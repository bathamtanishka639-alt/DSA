class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even = 0;

        for(int i = 0; i < nums.size(); i++) {

            int r = nums[i];
            int count = 0;

            while(r > 0) {
                count++;
                r = r / 10;
            }

            if(count % 2 == 0) {
                even++;
            }
        }

        return even;

        
    }
};
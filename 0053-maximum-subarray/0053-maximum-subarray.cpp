class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum;
        int maxsum = nums[0];

        for (int i = 0; i < n; i++) {
            sum = max(0, sum);
            sum = sum+nums[i];
            
            maxsum = max(sum, maxsum);
        }
        return maxsum;
    }
};
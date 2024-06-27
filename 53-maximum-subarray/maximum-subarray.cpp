class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum = nums[0];
        int maxSum = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i] > currentSum + nums[i])
            currentSum = nums[i];
            else
            currentSum = currentSum + nums[i];
            if(currentSum > maxSum)
            maxSum = currentSum;
        }
        return maxSum;
    }
};
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
        return nums[0];
        for(int i=0;i<n;i++){
            if(nums[i]==nums[i+1])
            i++;
            else
            return nums[i];
        }
        return 0;
    }
};
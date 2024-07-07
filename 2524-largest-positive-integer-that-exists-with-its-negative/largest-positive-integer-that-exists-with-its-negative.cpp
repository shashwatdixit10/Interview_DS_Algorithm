class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n = nums.size();
        int maxi = -1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(nums[i]<0 && nums[j]==(nums[i] * -1)){
                    maxi = max(maxi,nums[j]);
                }
            }
        }
        return maxi;
    }
};
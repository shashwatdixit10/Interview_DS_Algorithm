class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
       unordered_map<int,int> mp;

       for(auto &i : nums){
        mp[i]++;
       }

       int mini = *min_element(nums.begin(),nums.end());
       int maxi = *max_element(nums.begin(),nums.end());
       
       int j = 0;
       for(int i = mini; i<=maxi; i++){

        while(mp[i]>0){
            nums[j] = i;
            j++;
            mp[i]--;
        }
       }
       return nums;
    }
};
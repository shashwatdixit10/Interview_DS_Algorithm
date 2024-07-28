class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n = nums.size();
        int sum = 0, count = 0;
        int i=0, j = 0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        while(j<n){
        unordered_map<int,int> mp1;
        count = 0;
        i=j;

        while(i<n){
            if(mp1.find(nums[i])==mp1.end()){
                count++;
                mp1[nums[i]]++;
            }
            if(count==mp.size()){
                sum = sum + (n-i);
                break;
            }
            i++;
        }
        j++;
        }
        return sum;
    }
};
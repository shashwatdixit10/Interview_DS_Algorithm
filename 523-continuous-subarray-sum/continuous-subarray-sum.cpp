class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        mp[0] = -1;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum = sum + nums[i];
            int a = sum % k;
            if(mp.find(a)!=mp.end() && (i - mp[a])>=2){
                return true;
            }
            if(mp.find(a)==mp.end())
                mp[a] = i;
        }
        return false;
    }
};
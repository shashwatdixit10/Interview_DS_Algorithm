class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        mp[0] = 1;
        int sum = 0;
        int count = 0;
        for(int i=0;i<n;i++){
            sum = sum + nums[i];
            int a = sum % k;
            if(a<0)
            a = a + k; 
            if(mp.find(a)!=mp.end()){
                count = count + mp[a];
            }
            mp[a]++;
        }
        return count;
    }
};
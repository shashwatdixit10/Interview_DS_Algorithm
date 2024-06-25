class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
       unordered_map<int,int> mp;
       for(int i=1;i<=nums.size();i++){
        mp[i]++;
       }

       for(int i=0;i<nums.size();i++){
        if(mp.find(nums[i]) != mp.end())
        mp[nums[i]]++;
       }
       for(auto it : mp){
        if(it.second < 2 )
        ans.push_back(it.first);
       }
return ans;
    }
};

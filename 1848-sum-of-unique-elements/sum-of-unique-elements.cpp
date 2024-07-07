class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();
        int sum  = 0;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto i : mp){
            if(i.second == 1)
            sum = sum + i.first;
        }
        return sum;
    }
};
class Solution {
public:
    int partitionString(string s) {
        int n = s.size();
        int ans = 1;
        unordered_set<char> mp;
        for(int i=0;i<n;i++){
            char ch = s[i];
            if(mp.find(ch)!=mp.end()){
                ans++;
                mp.clear();
            }
            mp.insert(ch);
        }
        return ans;
    }
};

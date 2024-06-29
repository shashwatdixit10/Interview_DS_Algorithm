class Solution {
public:
    bool ispred(string prev, string curr){
        int n = prev.size();
        int m = curr.size();
        int i=0,j=0;

        if(n>=m || m-1!=n)
        return false;

        while(i<n && j<m){
            if(prev[i]==curr[j])
            i++;
            j++;
        }
        if(i==n)
        return true;
        return false;
    }
    int longestStrChain(vector<string>& words) {
        int n = words.size();

        sort(words.begin(),words.end(), [](string a, string b){
            return a.length() < b.length();
        });

        vector<int> dp(n,1);
        int ans = 1;

        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(ispred(words[j],words[i]) == true){
                    dp[i] = max(dp[i],dp[j]+1);
                    ans = max(ans,dp[i]);
                }
            }
        }
        return ans;
    }
};
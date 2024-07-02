class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1) return 1;
        int a = trust.size();
        vector<int> outdegree(n+1,0);
        vector<int> indegree(n+1,0);
        for(int i=0;i<a;i++){
            int u = trust[i][0];
            int v = trust[i][1];

            outdegree[u]++;
            indegree[v]++;
        }
        int ans = 0;
        for(int i=1;i<=n;i++){
            if(outdegree[i]==0)
            ans = i;
        }
        if(indegree[ans]==n-1)
        return ans;
        return -1;
    }
};
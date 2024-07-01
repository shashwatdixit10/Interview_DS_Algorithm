class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n = prerequisites.size();
        unordered_map<int,vector<int>> adj;

        for(int i=0;i<n;i++){
            int u = prerequisites[i][1];
            int v = prerequisites[i][0];

            adj[u].push_back(v);
        }

        vector<int> indegree(numCourses,0);
        queue<int> q;
        for(int i=0;i<numCourses;i++){
            for(auto v : adj[i]){
                indegree[v]++;
            }
        }

        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0)
            q.push(i);
        }

        while(!q.empty()){
            int front = q.front();
            q.pop();
            for(auto v : adj[front]){
                indegree[v]--;
                if(indegree[v]==0)
                q.push(v);
            }
        }

        for(int i=0;i<indegree.size();i++){
            if(indegree[i]!=0)
            return false;
        }
        return true;
    }
};
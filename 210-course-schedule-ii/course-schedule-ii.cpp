class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int,vector<int>> adj;
        int n = prerequisites.size();
        for(int i=0;i<n;i++){
            int u = prerequisites[i][1];
            int v = prerequisites[i][0];

            adj[u].push_back(v);
        }

        vector<int> indegree(numCourses,0);
        for(int i=0;i<numCourses;i++){
            for(auto v : adj[i]){
                indegree[v]++;
            }
        }
        int count = 0;
        queue<int> q;
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0)
            q.push(i);
        }

        vector<int> result;
        while(!q.empty()){
            int front = q.front();
             result.push_back(front);
             count++;
            q.pop();
            for(auto v : adj[front]){
                indegree[v]--;
                if(indegree[v]==0)
                q.push(v);
            }
        }
        vector<int> ans;
        if(count!=numCourses)
        return ans;
        return result; 
    }
};
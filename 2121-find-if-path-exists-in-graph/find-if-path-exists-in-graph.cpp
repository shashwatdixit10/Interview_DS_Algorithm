class Solution {
public:
      
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>> adj;
        for(int i=0;i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        if(n==1) return true;
        vector<int> result;
        queue<int> q;
        q.push(source);
        vector<bool> visited(n,false);
        visited[source] = true;
        while(!q.empty()){
            int front = q.front();
            q.pop();
            result.push_back(front);
            for(auto v : adj[front]){
                if(!visited[v]){
                    visited[v] = true;
                    q.push(v);
            }
        }
    }
    int m = result.size();
    for(int i=0;i<m;i++){
        if(result[i]==destination)
        return true;
    }
        return false;
    }
};
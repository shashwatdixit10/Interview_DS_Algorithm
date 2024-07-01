class Solution {
public:

    void bfs(unordered_map<int,vector<int>> adj, int source, vector<bool> &visited){
        queue<int> q;
        q.push(source);

        visited[source] = true;

        while(!q.empty()){
            int front = q.front();
            q.pop();
            for(auto v : adj[front]){
                if(!visited[v]){
                    bfs(adj,v,visited);
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int count = 0;
        int n = isConnected.size();
        unordered_map<int,vector<int>> adj;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        vector<bool> visited(n,false);
        for(int i=0;i<n;i++){
            if(!visited[i]){
                bfs(adj,i,visited);
                count++;
            }
        }
        return count;
    }
};
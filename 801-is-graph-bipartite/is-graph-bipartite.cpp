class Solution {
public:
    bool bfs(vector<vector<int>>& graph, int source, vector<int> &color){
        queue<int> q;
        q.push(source);
        color[source] = 0;

        while(!q.empty()){
            int front = q.front();
            q.pop();
            for(auto v  : graph[front]){
                if(color[v]==color[front])
                return false;
                else if(color[v]==-1){
                color[v] = 1 - color[front];
                q.push(v);
            }
            }
        }
           return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n,-1);

        for(int i=0;i<n;i++){
            if(color[i]==-1){
                bool ans = bfs(graph,i,color);
                if(ans==false)
                return false;
            }
        }
        return true;
    }
};
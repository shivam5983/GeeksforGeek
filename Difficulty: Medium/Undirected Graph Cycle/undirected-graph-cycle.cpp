class Solution {
  public:

    bool dfs(int u, vector<vector<int>>& adj, vector<int>& vis, int parent) {
        vis[u] = 1;
        for (int v : adj[u]) {
            if (!vis[v]) {
                if (dfs(v, adj, vis, u)) return true;
            } else if (v != parent) {
                return true;
            }
        }
        return false;
    }

    bool isCycle(int V, vector<vector<int>>& edges) {
        
        vector<vector<int>> adj(V);
        for (auto &edge : edges) {
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u); 
        }

        
        vector<int> vis(V, 0);

        
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                if (dfs(i, adj, vis, -1)) {
                    return true;
                }
            }
        }
        return false;
    }
};

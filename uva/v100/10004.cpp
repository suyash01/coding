#include<bits/stdc++.h>
using namespace std;

int main(){
    while (true){
        int n;
        cin >> n;
        if (!n)
            break;
        vector<vector<pair<int, int>>> adj(n);
        int e;
        cin >> e;
        while(e--){
            int a, b;
            cin >> a >> b;
            adj[a].push_back(make_pair(b, 1));
            adj[b].push_back(make_pair(a, 1));
        }
        queue<int> q;
        q.push(0);
        vector<int> color(n, INT_MAX);
        color[0] = 0;
        bool isBipartite = true;
        while(!q.empty() & isBipartite){
            int u = q.front();
            q.pop();
            for (int j = 0; j < (int)adj[u].size(); ++j) {
                pair<int, int> v = adj[u][j];
                if (color[v.first] == INT_MAX){
                    color[v.first] = 1 - color[u];
                    q.push(v.first);
                }
                else if(color[v.first] == color[u]){
                    isBipartite = false;
                    break;
                }
            }
        }
        if (isBipartite)
            cout << "BICOLORABLE.\n";
        else
            cout << "NOT BICOLORABLE.\n";
    }
    return 0;
}
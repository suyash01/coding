#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    while(true) {
        vector<int> v;
        cin >> n >> m;
        if (!n && !m)
            break;
        bool adj[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                adj[i][j] = false;
            }
        }
        while (m--) {
            int a, b;
            cin >> a >> b;
            adj[a - 1][b - 1] = true;
        }
        vector<bool> visited(n, false);
        vector<int> in(n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (adj[i][j])
                    in[j]++;
            }
        }
        queue<int> q;
        for (int i = 0; i < n; i++)
            if (!in[i])
                q.push(i);
        while (!q.empty()) {
            int vertex = q.front();
            q.pop();
            v.push_back(vertex);
            for (int i = 0; i < n; i++) {
                if (adj[vertex][i] && !visited[i]) {
                    in[i]--;
                    if (!in[i]) {
                        q.push(i);
                        visited[i] = true;
                    }
                }
            }
        }
        for (int i = 0; i < n-1; i++)
            cout << v[i]+1 << " ";
        cout << v[n-1]+1;
        cout << endl;
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

#define INF 100000000
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector <ii> vii;

void toposort(set<int> &free, vector<int> &indegree, vector<char> &variables, vector<vector<int>> &adj, vector<int> &result){
    vi clone;
    for(int a : free)
        clone.push_back(a);
    if(clone.empty()){
        for(int a : result)
            cout << variables[a];
        cout << endl;
    }
    for(int a : clone){
        result.push_back(a);
        free.erase(a);
        for(int b : adj[a]){
            indegree[b]--;
            if(!indegree[b])
                free.insert(b);
        }
        toposort(free, indegree, variables, adj, result);
        for(int b : adj[a]){
            if(!indegree[b])
                free.erase(b);
            indegree[b]++;
        }
        free.insert(a);
        result.erase(result.end()-1);
    }
}

int main() {
    int t = 0;
    while(true) {
        t++;
        string s;
        getline(cin, s);
        if(cin.eof())
            break;
        vector<char> variables;
        istringstream var(s);
        char c1, c2;
        while (var >> c1)
            variables.push_back(c1);
        sort(variables.begin(), variables.end());
        int v = variables.size();
        map<char, int> m;
        for (int i = 0; i < v; i++)
            m.insert(make_pair(variables[i], i));
        vector<vector<int>> adj(v);
        getline(cin, s);
        istringstream con(s);
        while (con >> c1 >> c2)
            adj[m[c1]].push_back(m[c2]);
        vi indegree(v, 0);
        set<int> free;
        for (int i = 0; i < v; i++)
            for (int j : adj[i])
                indegree[j]++;
        for (int i = 0; i < v; i++)
            if (indegree[i] == 0)
                free.insert(i);
        vi result;
        if(t > 1)
            cout << endl;
        toposort(free, indegree, variables, adj, result);
    }
    return 0;
}
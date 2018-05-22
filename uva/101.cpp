#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

int n;
vector<vector<int>> v;

pii loc(int a){
    for(int i=0;i<n;i++)
        for(int j=0;j<v[i].size();j++)
            if(a==v[i][j])
                return make_pair(i, j);
    return make_pair(0, 0);
};

void initial(int a, int b){
    v[v[a][b]].push_back(v[a][b]);
    v[a].erase(v[a].begin()+b);
}

void move_onto(pii a, pii b){
    while(b.second+1!=v[b.first].size())
        initial(b.first, b.second+1);
    while(a.second+1!=v[a.first].size())
        initial(a.first, a.second+1);
    v[b.first].push_back(v[a.first][a.second]);
    v[a.first].erase(v[a.first].begin()+a.second);
}

void move_over(pii a, pii b){
    while(a.second+1!=v[a.first].size())
        initial(a.first, a.second+1);
    v[b.first].push_back(v[a.first][a.second]);
    v[a.first].erase(v[a.first].begin()+a.second);
}

void pile_onto(pii a, pii b){
    while(b.second+1!=v[b.first].size())
        initial(b.first, b.second+1);
    while(a.second!=v[a.first].size()) {
        v[b.first].push_back(v[a.first][a.second]);
        v[a.first].erase(v[a.first].begin()+a.second);
    }
}

void pile_over(pii a, pii b){
    while(a.second!=v[a.first].size()) {
        v[b.first].push_back(v[a.first][a.second]);
        v[a.first].erase(v[a.first].begin()+a.second);
    }
}

int main(){
    cin >> n;
    v.resize(n);
    for(int i=0;i<n;i++)
        v[i].push_back(i);
    while(true) {
        string s1, s2;
        int a, b;
        cin >> s1;
        if(s1=="quit")
            break;
        cin >> a >> s2 >> b;
        if(a==b)
            continue;
        pii c = loc(a);
        pii d = loc(b);
        if(c.first == d.first)
            continue;
        if(s1=="move" && s2=="onto")
            move_onto(c, d);
        if(s1=="move" && s2=="over")
            move_over(c, d);
        if(s1=="pile" && s2=="onto")
            pile_onto(c, d);
        if(s1=="pile" && s2=="over")
            pile_over(c, d);
    }
    for(int i=0;i<n;i++){
        cout << i << ':';
        for(int j : v[i])
            cout << ' ' << j;
        cout << "\n";
    }
    return 0;
}

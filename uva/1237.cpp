#include <bits/stdc++.h>

using namespace std;

#define INF 100000000
#define pb push_back
#define mp make_pair

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector <ii> vii;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t){
        int n;
        cin >> n;
        vector<pair<string, ii>> d;
        while(n--){
            string s;
            int a,b;
            cin >> s >> a >> b;
            d.emplace_back(make_pair(s, make_pair(a, b)));
        }
        cin >> n;
        while(n--){
            int p,c=0,index=0;
            cin >> p;
            for(int i=0;i<d.size();i++){
                if(d[i].second.first <= p && d[i].second.second >= p){
                    c++;
                    index = i;
                }
            }
            if (c==1)
                cout << d[index].first << endl;
            else
                cout << "UNDETERMINED\n";
        }
        if(t>1)
            cout << endl;
        t--;
    }
    return 0;
}
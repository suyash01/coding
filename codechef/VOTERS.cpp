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
    cin.tie(0);
    cout.tie(0);
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int n = n1+n2+n3;
    set<int> t, f;
    while(n--){
        int a;
        cin >> a;
        if(t.find(a)!=t.end())
            f.insert(a);
        else
            t.insert(a);
    }
    cout << f.size() << "\n";
    for(int a: f)
        cout << a << "\n";
    return 0;
}
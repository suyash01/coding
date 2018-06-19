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
    int n;
    cin >> n;
    int at=0,bt=0;
    int ml = 0;
    int p = 0;
    while(n--){
        int a,b;
        cin >> a >> b;
        at+=a;
        bt+=b;
        if(ml < abs(at-bt)){
            ml = abs(at-bt);
            p = at>bt?1:2;
        }
    }
    cout << p << " " << ml;
    return 0;
}
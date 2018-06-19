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
    int t;
    cin >> t;
    while(t--){
        int a, b, n;
        cin >> a >> b >> n;
        if(n&1){
            if(a>b)
                cout << 1 << endl;
            else if(a<b)
                cout << 2 << endl;
            else
                cout << 0 << endl;
        }
        else{
            a = abs(a);
            b = abs(b);
            if(a>b)
                cout << 1 << endl;
            else if(a<b)
                cout << 2 << endl;
            else
                cout << 0 << endl;
        }
    }
    return 0;
}
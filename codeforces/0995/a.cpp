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
    int n;
    cin >> n;
    set<int> s;
    while(n--){
        int a;
        cin >> a;
        if(a!=0)
            s.insert(a);
    }
    cout << s.size();
    return 0;
}
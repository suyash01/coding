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
    ll l, r, x, y;
    cin >> l >> r >> x >> y;
    set<ll> s;
    l = max(l, x);
    r = min(r, y);
    if(l>r) {
        cout << 0;
        return 0;
    }
    ll a = (ll)sqrt(r);
    for(ll i=1;i<=a;i++){
        if(r%i==0) {
            s.insert(i);
            s.insert(r / i);
        }
    }
    set<ll> z;
    for(ll i : s){
        if(i%l==0)
            z.insert(i);
    }
    vector<ll> v;
    for(ll i : z)
        v.emplace_back(i);
    ll count = 0;
    for(int i=0;i<v.size();i++){
        for(int j=i;j<v.size();j++){
            ll gcd = __gcd(v[i], v[j]);
            if(gcd == x && (v[i]*v[j])/gcd==y) {
                if (i == j)
                    count++;
                else
                    count += 2;
            }
        }
    }
    cout << count;
    return 0;
}
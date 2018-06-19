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
    int t;
    cin >> t;
    while(t--){
        int n,k,count = 0;
        cin >> n >> k;
        vi a(n);
        for(int i=0;i<n;i++)
            cin >> a[i];
        vi p;
        for(int i=0;i<n;i++)
            p.emplace_back(i+1);
        do{
            bool f = false;
            for(int i=0;i<n;i++) {
                if (a[i] > 0 && a[i] != p[i]) {
                    f = true;
                    break;
                }
            }
            if(f)
                continue;
            int c=0;
            for(int i=1;i<n;i++)
                if(p[i]>p[i-1])
                    c++;
            if(c==k)
                count++;
        }while (next_permutation(p.begin(), p.end()));
        cout << count << endl;
    }
    return 0;
}
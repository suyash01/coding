#include <bits/stdc++.h>
 
#define pb push_back
#define mp make_pair
 
using namespace std;
 
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int a[3][3];
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                cin >> a[i][j];
        ll best = 0;
        for(int i=0;i<3;i++){
            ll sum = 0;
            for(int j=0;j<3;j++)
                sum += a[i][j];
            best = max(best,sum);
        }
        for(int i=0;i<3;i++){
            ll sum = 0;
            for(int j=0;j<3;j++)
                sum += a[j][i];
            best = max(best,sum);
        }
        if((best&1)==0)
            best--;
        cout << max(best, 0LL) << endl;
    }
    return 0;
}
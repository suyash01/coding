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
        int n,m;
        vector<int> v(20000);
        cin >> n >> m;
        while(m--){
            int a;
            cin >> a;
            int k=1;
            for(int i=a;i<20000;i=i+k*a){
                v[i]++;
                k++;
            }
        }
        int sum = 0;
        for(int i=0;i<20000;i++){
            sum+=v[i];
            if(sum>=n){
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
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
        int n,k;
        cin >> n >> k;
        set<int> s;
        for(int i=0;i<n;i++){
            int a;
            cin >> a;
            s.insert(a);
        }
        for(int i=0;k>0;i++){
            if(s.count(i)==0){
                s.insert(i);
                k--;
            }
        }
        for(int i=0;;i++){
            if(s.count(i)==0){
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
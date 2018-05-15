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
        int n,p;
        cin >> n >> p;
        int c1=0,c2=0;
        int c = p/2, h = p/10;
        for(int i=0;i<n;i++){
            int a;
            cin >> a;
            if(a>=c)
                c1++;
            if(a<=h)
                c2++;
        }
        if(c1==1 && c2==2)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}
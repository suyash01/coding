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
        int n;
        cin >> n;
        cout << "2 " << 100000-n+10242 << " ";
        for(int i=0;i<42949;i++)
            cout << "100000 ";
        for(int i=0;i<n-42951;i++)
            cout << "1 ";
        cout << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
 
#define pb push_back
#define mp make_pair
 
using namespace std;
 
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

int gcd(int a, int b){
    if (b == 0)
       return a;
    return gcd(b,a%b);
}

int points(int x1, int x2, int y1, int y2){
    if (x1==x2)
        return abs(y1-y2)-1;
    if (y1==y2)
        return abs(x1-x2)-1;
    return gcd(abs(x1-x2), abs(y1-y2))-1;
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int x1,x2,y1,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << points(x1,x2,y1,y2) << endl;
    }
    return 0;
}
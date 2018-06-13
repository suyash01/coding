#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,s=0;
        cin >> n;
        while(n--){
            int a,b,c;
            cin >> a >> b >> c;
            s += a*c;
        }
        cout << s << endl;
    }
    return 0;
}
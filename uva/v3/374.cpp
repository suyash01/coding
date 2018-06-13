#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

ull mod(ull b, ull p, ull m){
    if(p==0)
        return 1;
    else
        return (((mod(b,p/2,m)*mod(b,p/2,m))%m)*(p%2==1?b:1));
}

int main(){
    ull b,p,m;
    while(cin >> b >> p >> m) {
        b %= m;
        cout << mod(b, p, m) << endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

ull combination(ull n, ull k) {
    if (k > n)
        return 0;
    if (k * 2 > n)
        k = n-k;
    if (k == 0)
        return 1;
    ull result = n;
    for( int i = 2; i <= k; ++i ) {
        result *= (n-i+1);
        result /= i;
    }
    return result;
}

int main(){
    while(true){
        ull n,m;
        cin >> n >> m;
        if(n==0 && m==0)
            break;
        cout << n << " things taken " << m << " at a time is " << combination(n, m) << " exactly.\n";
    }
    return 0;
}
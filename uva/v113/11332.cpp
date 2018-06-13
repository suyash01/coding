#include<bits/stdc++.h>
using namespace std;

int main(){
    while(true){
        long long n;
        cin >> n;
        if(!n)
            break;
        while(n>9){
            long long r = 0;
            while(n>0){
                r += n%10;
                n /= 10;
            }
            n = r;
        }
        cout << n << endl;
    }
    return 0;
}
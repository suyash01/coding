#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cout << "Case " << i+1 << ": ";
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a+3);
        cout << a[1] << endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,c=0;
    cin >> t;
    while(t--){
        c++;
        int a,b;
        cin >> a >> b;
        int sum=0;
        for (int i = a; i <= b; ++i) {
            if(i&1)
                sum+=i;
        }
        cout << "Case " << c << ": " << sum << endl;
    }
    return 0;
}
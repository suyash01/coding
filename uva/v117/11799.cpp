#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int j=0;j<t;j++){
        int n;
        cin >> n;
        int m = 0;
        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            if(a>m)
                m=a;
        }
        cout << "Case " << j+1 << ": " << m << endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    while(true){
        int k;
        cin >> k;
        if(k==0)
            break;
        int n,m;
        cin >> n >> m;
        while(k--){
            int x,y;
            cin >> x >> y;
            if(x>n && y>m)
                cout << "NE\n";
            else if(x<n && y>m)
                cout << "NO\n";
            else if(x>n && y<m)
                cout << "SE\n";
            else if(x<n && y<m)
                cout << "SO\n";
            else
                cout << "divisa\n";
        }
    }
    return 0;
}
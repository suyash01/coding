#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie();cout.tie();
    int t;
    cin >> t;
    while(t--){
        double c[150];
        for(int i=0;i<150;i++)
            c[i] = 0.0;
        int k;
        cin >> k;
        while(k--){
            char a;
            cin >> a;
            cin >> c[a];
        }
        cin >> k;
        string s;
        getline(cin, s);
        double cost = 0.0;
        while(k--){
            getline(cin, s);
            for(int i=0;i<s.size();i++)
                cost += c[s[i]];
        }
        cost /= 100.0;
        printf("%.2lf$\n", cost);
    }
    return 0;
}